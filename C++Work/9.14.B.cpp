#include<iostream>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
    int q,b,s,g;
    q=x/10;
    s=x%10;
    b=n%10;
    g=n/10;
    cout<<q<<b<<s<<g<<endl;
    return 0;
}