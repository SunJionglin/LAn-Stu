#include<iostream>
using namespace std;
int main(){
    int F,C;
    cin>>F>>C;
     C=(F-32)*5.0/9;
    cout<<C<<endl;    
     F=(C*9.0/5)+32;
    cout<<F<<endl;
    return 0;
}