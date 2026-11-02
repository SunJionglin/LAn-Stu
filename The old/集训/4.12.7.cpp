#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    int best_k=0,best_m=0;
    for(int k=30;k>=1;k--){
        int m=0;
        ll tot=0;
        bool jud_o=false;
        while(true){
            m++;
            ll tem=1;
            bool jud=false;
            for(int i=0;i<k;i++){
                tem*=m;
                if(tem>n) {
                    jud=true;
                    break;
                }
            }
            if(jud) break;
            tot+=tem;
            if(tot==n){
                best_k=k;
                best_m=m;
                jud_o=true;
                break;
            }
            if(tot>n) break;
        }
        if(jud_o) break;
    }
    if(best_k==0) cout<<"Impossible for "<<n<<"."<<endl;
    else{
        for(int i=1;i<=best_m;i++){
            cout<<i<<'^'<<best_k;
            if(i!=best_m) cout<<'+';
        }
    }
    return 0;
}