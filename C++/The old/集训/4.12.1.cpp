#include<iostream>
using namespace std;
int main(){
    int T,t;
    bool S;
    cin>>T>>S>>t;
    if(S && T>=35 && t>=33){
        cout<<"Bu Tie"<<endl;
        cout<<T<<endl;
    }
    else if(!S && T>=35 && t>=33){
        cout<<"Shi Nei"<<endl;
        cout<<T<<endl;
    }
    else if(S && (T<35 || t<33)){
        cout<<"Bu Re"<<endl;
        cout<<t<<endl;
    }
    else if(!S && (T<35 || t<33)){
        cout<<"Shu Shi"<<endl;
        cout<<t<<endl;
    }
    return 0;
}