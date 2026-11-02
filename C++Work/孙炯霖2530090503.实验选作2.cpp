#include<iostream>
#include<string>
using namespace std;
int main(){
    int x;
    cin>>x;
    int n=x;
    string ei,six;
    while(n!=0){
        ei.insert(0,1,(char)('0'+n%8));
        n/=8;
    }
    cout<<ei<<endl;
    n=x;
    while(n!=0){
        if(n%16<10){
            six.insert(0,1,(char)('0'+n%16));
        }else{
            char c=(char)('A'+n%16-10);
            six.insert(0,1,c);
        }
        n/=16;
    }
    cout<<six<<endl;
    return 0;
}