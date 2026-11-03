#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    unordered_set<int> s;
    while(n--){
        int t;
        cin>>t;
        if(s.find(t)==s.end()){
            s.insert(t);
            arr.push_back(t);
        }
    }
    for(int &i:arr){
        cout<<i<<' ';
    }
    cout<<endl;
    cout<<arr.size()<<endl;
    return 0;
}