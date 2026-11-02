#include<iostream>
#include<string>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<string> a(N);
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    string s;
    cin>>s;
    for(auto & i : a){
        s.find(i)
    }
}