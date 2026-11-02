#include<iostream>
using namespace std;
int main(){
    int x,g,s,b;
    cin>>x;
    g=x%10;
    s=(x%100)/10;
    b=x/100;
    cout<<"个位:"<<g<<' '<<"十位:"<<s<<' '<<"百位:"<<b<<endl;
    return 0;
}