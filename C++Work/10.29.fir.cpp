#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=1,b=1;
    for(int i=1;i<=20;i++){
        if(i==1 || i== 2){
            cout<<setw(6)<<1;
            continue;
        }
        int c=a+b;
        cout<<setw(6)<<c;
        a=b;
        b=c;
        if(i%10 == 0)
        cout<<endl;
    }
    return 0;
}