#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> a,b;
    int x;
    for(int i=0;i<10;i++){
        cin>>x;
        if(x%2==0) b.push_back(x);
        else a.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int &i: a){
        cout<<i<<" ";
    }
    for(int &i: b){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}