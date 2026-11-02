#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n0,n1,n;
    cin>>n0>>n1>>n;
    bool jud = 0;
    int cha=1e6;
    int n_0,n_1;
    for(int i=1;i<n;i++){
        if(n0%i==0 && n1%(n-i)==0 && n0/i!=1 && n1/(n-i)!=1){
            jud=1;
            int cha_t=abs(n0/i-n1/(n-i));
            if(cha_t<cha){
                cha=cha_t;
                n_0=i;
                n_1=n-i;
            }
        }
    }
    if(jud){
        cout<<n_0<<' '<<n_1<<endl;
    }
    else{
        cout<<"No Solution"<<endl;
    }
    return 0;

}