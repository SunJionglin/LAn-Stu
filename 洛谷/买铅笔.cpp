#include<iostream>
#include <limits.h>
#define MAX_INPUT INT_MAX
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<int,int> a[3];
    for(auto &i : a){
        
        cin>>i.first>>i.second;
    }
    int minp=MAX_INPUT;
    int minm=MAX_INPUT;
    for(auto &i:a){
        int p=(n/i.first);
        int jud=n%i.first;
        if(jud!=0){
            p++;
        }
        int m=p*i.second;
        if(m<minm){
            minm=m;
            minp=p;
        }
    }
    cout<<minm<<endl;
    return 0;
}