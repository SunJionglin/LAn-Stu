#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a;
    vector<int> b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int num=0;
    int pri=0;
    for(auto & i : a){
        for(int k=num;k<m;k++){
            if(b[k]>=i){
                pri+=b[k];
                num=k+1;
                n--;
                break;
            }
        }
    }
    if(n!=0){
        cout<<"you died!"<<endl;
    }
    else{
        cout<<pri<<endl;
    }
    return 0;
}