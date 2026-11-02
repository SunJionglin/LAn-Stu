#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int T,M;
    cin>>T>>M;
    vector<pair<int,int> > arr(M);
    for(int i=0;i<M;i++){
        cin>>arr[i].first>>arr[i].second;
    }

    // 01背包 dp
    vector<int> dp(T+1, 0);
    for(int i=0;i<M;i++){
        int t = arr[i].first;
        int v = arr[i].second;
        // 倒序遍历
        for(int j=T;j>=t;j--){
            dp[j] = max(dp[j], dp[j-t]+v);
        }
    }
    cout<<dp[T]<<endl;
    return 0;
} 