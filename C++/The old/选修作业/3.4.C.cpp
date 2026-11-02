#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int N,C;
    cin>>N>>C;
    vector<int> a(N);
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    unordered_map<int,int> mp;
    long long num=0;
    for(int &i : a){
        mp[i]++;  
    }
    for(auto & i : mp){
        int n_a = i.first;
        if(mp.count(n_a-C)){
            int n_b = n_a-C;
            num+=(long long)mp[n_a]*mp[n_b];
        }
    }
    cout<<num<<endl;    
return 0;
}