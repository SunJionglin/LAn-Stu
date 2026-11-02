#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int sum=0,num=0;
    while(true){
        int sec=0;
        cin>>sec;
        if(sec==-1) break;
        sum+=sec;
        num++;
    }
    double ave=(double)sum/num;
    cout<<fixed<<setprecision(2)<<ave<<endl;
    return 0;
}