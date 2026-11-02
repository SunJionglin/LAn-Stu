#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        vector<bool> used(n + 2, false);
        bool ok = true;

        for (int i = 0; i < n; ++i) {
            int pos = a[i];
            if (i == 0) {
                used[pos] = true;
                continue;
            }
            if (!used[pos - 1] && !used[pos + 1]) {
                ok = false;
                break;
            }
            used[pos] = true;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}