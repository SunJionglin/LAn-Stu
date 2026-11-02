#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool jud=0;
    for(int i=1;i*i<=n;i++){
        if(i*i==n){
            jud=1;
            break;
        }
    }
    cout<<jud<<endl;
    return 0;
    
}