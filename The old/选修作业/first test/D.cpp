#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    int N;
    ll M;
    cin >> N >> M;
    vector<int> h(N);
    int maxh = 0;
    for (int i = 0; i < N; ++i) {
        cin >> h[i];
        maxh = max(maxh, h[i]);
    }

    int l = 0, r = maxh;
    int ans = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        ll sum = 0;
        for (int x : h) {
            if (x > mid) sum += x - mid;
        }
        if (sum >= M) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}