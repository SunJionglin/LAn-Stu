#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=1;
    if(n>23){
        for(int i=1;i<=23;i++){
            sum*=i;
        }
        cout<<n<<' '<<sum;
        return 0;
    }
    else{
        for(int i=1;i<=n;i++){
        sum*=i;
    }
    cout<<sum;
    }
    
    return 0;
}