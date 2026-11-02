#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=1;
    while(1){
        if(b>a){
            cout<<b/2<<endl;
            break;
        }
        b*=2;
    }
    return 0;
}