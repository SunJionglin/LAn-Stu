#include<iostream>
using namespace std;
bool is_prime(int n){
    if(n<=1)return false;
    if(n==2)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0)return false;
    }
    return true;    
}
int main(){
    int x;
    cin>>x;
    bool found=true;
    for(int i=x;i<=2*x;i++){
        if(!is_prime(i) && i>1){
            cout<<i<<endl;
            found=false;
            break;
        }
    }
    if(found){
        cout<<-1<<endl;
    }
    return 0;
}