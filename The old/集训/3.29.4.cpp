#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> k(m);
    for(int i=0;i<m;i++){
        cin>>k[i];
    } 
    int tot = accumulate(k.begin(),k.end(),0);
    tot = tot-n*(m-1);
    tot = max(0,tot);
    cout << tot << endl;
    return 0;
}