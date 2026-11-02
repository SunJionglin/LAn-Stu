#include<iostream>
using namespace std;
bool leap (int & y){
    if(y%4==0&&y%100!=0 || y%400==0)return true;
    return false;
}
int main(){
    int y,m;
    cin>>y>>m;
    int ans=0;
    
    int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    ans=arr[m-1];
    if(m==2&&leap(y)){
        ans=29;
    }
    cout<<ans<<endl;
    return 0;
}