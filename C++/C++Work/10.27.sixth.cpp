#include<iostream>
#include<vector>
using namespace std;
vector<int> jud(int & n){
    vector<int> res;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            res.push_back(i);
            if(i*i!=n && n/i!=n)
            res.push_back(n/i);
        }
    }
    return res;
}
int main(){
    int cou=0;
    for(int i=2;i<=1000;i++){
        vector<int> tem=jud(i);
        int sum=0;
        for(auto &a : tem){
            sum+=a;
        }
        if(sum==i){
            cou++;
            cout<<i<<" ";
        }
    }
    cout<<endl<<"个数："<<cou<<endl;

}