#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n=3;
    while(n--){
        double a,b,c;
        cin>>a>>b>>c;
        double p=(a+b+c)/2;
        double S=sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<S<<endl;
    }
    return 0;
}
