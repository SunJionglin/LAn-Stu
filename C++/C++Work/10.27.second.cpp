#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll n,res=1;
    cin>>n;
    for(ll i=0;i<=n;i+=5){
        if(n>=5 && i==0){
            continue;
        }
            res*=i;
    }
    cout<<res<<endl;
    return 0;
}