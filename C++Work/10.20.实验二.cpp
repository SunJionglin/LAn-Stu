#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    double pri_a=2.5, pri_b=12.8, pri_c=4.6;
    if(a+b>10){
        pri_a=pri_a*0.9;
        pri_b=pri_b*0.9;
    }
    if(c>20){
        pri_c=pri_c*0.8;    
    }
    double tot=pri_a*a+pri_b*b+pri_c*c;
    cout<<tot<<endl;
    return 0;
}