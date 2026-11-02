#include<iostream>
using namespace std;
int main(){
    double m,n;
    cin>>m>>n;
    double sum=0,tem=0;
    for(int i=0;i<n;i++){
        sum+=m;
        m*=1.0/2;
        sum+=m;
    }
    cout<<m<<" "<<sum<<endl;
    return 0;
}