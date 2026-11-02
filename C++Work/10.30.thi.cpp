#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str=to_string(n);
    int sum=0;
    for(auto &i : str){
        sum+=i-'0';
    }
    cout<<sum<<endl;
    return 0;
}