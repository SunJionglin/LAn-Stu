#include<iostream>
#include<algorithm>
using namespace std;
    const int maxt=1e7+10;
    const int maxm=1e4+10;
    int a[maxm];
    int b[maxm];
    long long c[maxt];
int main(){
    int t,m;
    cin>>t>>m;
    for(int i=0;i<m;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<m;i++){
        for(int j=a[i];j<=t;j++){
            c[j]=max(c[j-a[i]]+b[i],c[j]);
        }
        
    }
    cout<<c[t]<<endl;
    return 0;
}