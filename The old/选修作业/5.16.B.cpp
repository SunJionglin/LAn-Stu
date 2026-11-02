#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int a_j = 0;
        for(auto & a : s){
            if(a=='(')a_j++;
            else a_j--;
        }
        if(a_j!=0){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";

    }
}