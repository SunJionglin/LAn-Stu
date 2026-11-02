#include<iostream>
using namespace std;

int main(){
    int m,t,s;
    cin>>m>>t>>s;

    // 一共吃掉多少个
    int eat = s / t;
    // 有余数说明还会多吃半个时间，也要消耗1个
    if(s % t != 0){
        eat++;
    }

    // 剩余不能小于0
    int ans = m - eat;
    if(ans < 0) ans = 0;

    cout << ans << endl;
    return 0;
}