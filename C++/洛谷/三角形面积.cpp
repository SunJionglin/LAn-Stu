#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double s=(a+b+c)/2.0;
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<fixed<<setprecision(1)<<area<<endl;
    return 0;
}