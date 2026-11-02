#include<iostream>
using namespace std;
typedef long long ll;
int day (int y,int m){
    switch (m){
        case 1:case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:{
            bool ju_y=false;
            if((y%4==0 && y%100!=0) ||y%400==0) ju_y=true;
            if(ju_y) return 29;
            else return 28;
        }
        default:
            return 0;
    }
}
bool su (int x){
    if(x<=1) return false;
    else if(x==2) return true;
    else if(x%2==0) return false;
    for(int i=3;i*i<=x;i+=2){
        if(x%i==0) return false;
    }
    return true;
}
ll power(int x,int y){
    if(y==0)
     return 1;
    return x*power(x,y-1);
}
int main(){
    int y,m,n;
    ll a,b;
    cin>>y>>m>>n>>a>>b;
    cout<<day(y,m)<<" "<<(su(n) ? "Yes": "No" )<<" "<<power(a,b)<<endl;
    return 0;
}