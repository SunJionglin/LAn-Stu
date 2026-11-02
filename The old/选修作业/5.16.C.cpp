#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int> san, er, dou, wu;
        for(auto & i : a){
            if(i%3==0 && i%2==0)dou.push_back(i);
            else if(i%2==0)er.push_back(i);
            else if(i%3==0)san.push_back(i);
            else wu.push_back(i);
        }
        for(auto & i : dou)cout<<i<<" ";
        for(auto & i : er)cout<<i<<" ";
        for(auto & i : wu)cout<<i<<" ";
        for(auto & i : san)cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}