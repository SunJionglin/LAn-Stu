#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];  
    }
    for(auto & s : b){
        cout<<a[a.begin()+s-1]<<endl;
    }
    return 0;
}