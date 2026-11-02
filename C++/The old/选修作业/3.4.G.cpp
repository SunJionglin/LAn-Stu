#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){    
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i==0)cout<<0<<" ";
        else{
            int num=0;
            for(int j=0;j<i;j++){
                if(arr[i]>arr[j])
                num++;
            }
            cout<<num<<" ";
        }
    }
    return 0;
}