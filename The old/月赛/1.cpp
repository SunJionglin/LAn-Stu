#include <iostream>
#include <vector>
using namespace std;
const int MOD = 998244353;


long long qpow(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

long long C(int n, int m) {
    static vector<long long> fac(1, 1), ifac(1, 1);
    while ((int)fac.size() <= n) {
        fac.push_back(fac.back() * fac.size() % MOD);
        ifac.push_back(qpow(fac.back(), MOD - 2));
    }
    return fac[n] * ifac[m] % MOD * ifac[n - m] % MOD;
}

int main() {
    int n, k;
    cin >> n >> k;
    if (k >= n) {
        cout << C(2 * n, n) << endl;
        return 0;
    }
    int off = k * n;
    vector<int> dp(2 * off + 1, 0), pre(2 * off + 2, 0);
    dp[off] = 1;
    for (int i = 1; i <= n; ++i) {
        pre[0] = 0;
        for (int j = 0; j <= 2 * off; ++j)
            pre[j + 1] = (pre[j] + dp[j]) % MOD;
        vector<int> ndp(2 * off + 1, 0);
        for (int j = 0; j <= 2 * off; ++j) {
            int l = max(0, j - k);
            int r = min(2 * off, j + k);
            ndp[j] = (pre[r + 1] - pre[l] + MOD) % MOD;
        }
        dp.swap(ndp);
    }
    int ans = 0;
    for (int x : dp) ans = (ans + x) % MOD;
    cout << ans << endl;
    return 0;
}