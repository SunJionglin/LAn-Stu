#include<iostream>
typedef long long ll;
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        ll ans;
        int M=1,N=1;
        for(int i=1;i<=m;i++){
            ans=(n-i+1/i)%998244353;
        }
        cout<<ans<<endl;
    }
    return 0;
}