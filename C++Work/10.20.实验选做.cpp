#include<iostream>
using namespace std;
bool jud(int &n){
    if(n%6==0) return true;
    else if(n%10==6) return true;
    else if(n/100000 != 0) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    if(jud(n)) cout<<"幸运数"<<endl;
    else cout<<"不是哦"<<endl;
    return 0;
}
