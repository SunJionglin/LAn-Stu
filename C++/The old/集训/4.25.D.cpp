#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>
using namespace std;
int main(){//
    int t;
    cin>>t;//
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n*k%2==0){
            cout<<"Yes"<<endl;
            continue;
        }
        int tot=accumulate(a.begin(),a.end(),0);
        if(tot%2!=0){
            cout<<"Yes"<<endl;
            continue;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}