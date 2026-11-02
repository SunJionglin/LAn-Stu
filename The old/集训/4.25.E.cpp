#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];  
        }
        int n_k;
        cin>>n_k;
        int num_l=0;
        bool jud_l=true;
        for(int i=0;i<n_k;i++){
            
            if(a[i]!=a[n_k])jud_l=false;
            if(jud_l)continue;
            if(a[i]==a[i+1])continue;
            num_l++;
        }
        int num_r=0;
        bool jud_r=true;
        for(int i=n-1;i>n_k;i--){
            
            if(a[i]!=a[n_k])jud_r=false;
            if(jud_r)continue;
            if(a[i]==a[i-1])continue;
            num_r++;
        }
        int num=max(num_l,num_r);
        if(num%2!=0)num++;
        cout<<num<<endl;

    }
return 0;
}