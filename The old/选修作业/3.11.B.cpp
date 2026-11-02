#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    int k=0;
    vector <int> b;
    while(a.size()>1){
        for (auto  it = a.begin(); it != a.end(); ){
            k++;
            if(k%m==0){
                b.push_back(*it);
                it = a.erase(it);
                
            } else {
                ++it;
            }
        }
    }
    for(auto & s : b){
        cout<<s<<" ";
    }
    cout<<a[0]<<endl;
    return 0;

}