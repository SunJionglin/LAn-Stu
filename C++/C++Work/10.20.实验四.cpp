#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    double d=b*b-4.0*a*c;
    if(d > 0){
        cout << (-b+sqrt(d))/(2.0*a) << " " << (-b-sqrt(d))/(2.0*a);
    }else if(d == 0){
        cout << (-b)/(2.0*a);
    }else{
        cout << "无解";
    }
    return 0;
}
