#include<iostream>
#include<string>
using namespace std;
int main(){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int hour=0;
        int min=0;
        if(b>d){
            hour=c-a-1;
            min=60-b+d;
        }
        else{
            hour=c-a;
            min=d-b;
        }
    cout<<hour<<"时 "<<min<<"分"<<endl;
    return 0;
}