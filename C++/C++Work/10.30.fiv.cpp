#include<iostream>
using namespace std;
int main(){
    int i=7;
    while(1){
        i++;
        if(i%2==1 && i%3==2 && i%5==4 && i%6==5 && i%7==0) break;
    }
    cout<<i<<endl;
    return 0;
}