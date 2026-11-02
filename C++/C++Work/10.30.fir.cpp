#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<100;i++){
        int squ=i*i;
        if(i<10){
            if(squ%10==i){
                cout<<i<<" ";
            }
        }
        else{
            if(squ%100==i){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}