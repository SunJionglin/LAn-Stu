#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int A = max(a,b);
        int B = min(a,b);
        int C = max(c,d);
        int D = min(c,d);
        bool jud = false;
        if(C>B && C<A){
            jud=(D>=0 && D<B) ? true : false;
        } 
        else if (D<A && D>B){
            jud=(C>A && C<=12) ? true : false;
        }
        if(jud){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    
}