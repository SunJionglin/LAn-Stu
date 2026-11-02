#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
    int n, m;
    cin >> n >> m;
    int k = min(n, m);
    ll square = 0;
    for (int i = 1; i <= k; i++)
    {
        square += (ll)(n - i + 1) * (m - i + 1);
    }
    ll all = (ll)n * (n + 1) / 2 * m * (m + 1) / 2;
    ll rect = all - square;
    
    cout << square << " " << rect << endl;
    return 0;
}