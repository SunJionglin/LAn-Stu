#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,a;
        cin>>x>>y>>a;
        double dep=0;
        int tot=x+y;
         a%=tot;
         if(a+0.5>x){
            cout<<"Yes"<<endl;
         }
         else{
            cout<<"No"<<endl;
         }
    }
    return 0;
}