#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        bool flag=false;
        for(auto it:mp){
            if(it.second!=1){
                cout<<-1<<endl;
                flag=true;
                break;
            }
        }
        if(flag)continue;
        sort(a.begin(),a.end(),[](int x,int y){
            return x>y;
        });
        for(int &i : a){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}