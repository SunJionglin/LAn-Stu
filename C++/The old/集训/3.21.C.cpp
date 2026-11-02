#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int good_count = 0;
        long long pre_sum = 0;
        long long max_val = 0;

        for(int i=0; i<n; i++){
            pre_sum += a[i];
            max_val = max(max_val, a[i]);

            if(i == 0){
                if(pre_sum == 0){
                    good_count++;
                }
            } else {
                if(pre_sum == 2 * max_val){
                    good_count++;
                }
            }
        }
        cout << good_count << '\n';
    }
    return 0;
}