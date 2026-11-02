#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int max=x>y?(x>z?x:z):(y>z?y:z);
    cout<<max;
    return 0;
}