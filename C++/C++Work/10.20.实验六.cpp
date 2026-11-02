#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d=n%5;
    if(d==0 || d==4) cout<<"晒网"<<endl;
    else cout<<"打鱼"<<endl;
    return 0;
}