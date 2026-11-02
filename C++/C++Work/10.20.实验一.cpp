#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int A[]={a,b,c};
    sort(A,A+3);
    cout<<A[0]<<" "<<A[1]<<" "<<A[2]<<endl;
    return 0;
}