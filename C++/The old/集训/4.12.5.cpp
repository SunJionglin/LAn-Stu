#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int secore=0;
    string s;
    cin>>s;
    char c[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    pair<char,int>  v[26];
    for(int i=0;i<26;i++){
        v[i].first=c[i];
        int sec;
        cin>>sec;
        v[i].second=sec;
    }
    unordered_map<char,int> m;
    for(char & c : s){
        m[c]++;
    }
    for(auto & p : v){
        auto it =m.find(p.first);
        if(p==v[25]){
            if(it!=m.end())
               cout<<it->second;
            else cout<<"0";
        }
        else if(it!=m.end())
        cout<<it->second<<" ";
        else cout<<"0 ";
    }
    cout<<endl;
    for (char ch : s) {
        secore += v[ch - 'a'].second;
    }
    cout<<secore<<endl;
    return 0;
}