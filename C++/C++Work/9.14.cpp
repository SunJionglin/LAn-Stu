#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int g,s,b;
    g=n%10;
    s=n/10%10;
    b=n/100;
    cout<<g<<s<<b<<endl;
    return 0;
}