#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n+1),s(n+1,0); 
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s[i]=s[i-1]+a[i]; 
    }
    int m;
    
    cin>>m;
    while(m--){
        int l,r;cin>>l>>r;
        cout<<s[r]-s[l-1]<<endl; 
    }
    return 0;
}