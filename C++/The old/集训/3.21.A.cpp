#include<iostream>
#include<string>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string a,b;
        cin>>a>>b;
        char tim;
        tim=a[0];
        a[0]=b[0];
        b[0]=tim;
        cout<<a<<' '<<b<<endl;
    }
}