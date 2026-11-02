#include<iostream>
using namespace std;
#include<string>
int main(){
    int n;
    cin>>n;
    while(n>=10){
        string str=to_string(n);
        n=0;
        for(auto &i : str){
            n+=i-'0';
        }
    }
    cout<<n<<endl;
    return 0;
}