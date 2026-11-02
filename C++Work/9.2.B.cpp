#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    double c=(double)a/b;
    int count =6;
    while(count--){
        cout<<fixed<<setprecision(5-count)<<c<<endl;
    }
    return 0;
}
