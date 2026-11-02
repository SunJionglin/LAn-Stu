#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=3;i<=100;i+=3){
        if(sum+i<100){
            sum+=i;
            continue;
        }
        else if(sum+i>=100){
            break;
        }
    }
    cout<<"不超过100最大的:"<<sum<<endl;
    return 0;
}