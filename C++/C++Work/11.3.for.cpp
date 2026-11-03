#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int n=10;
    while(n--){
        int t;
        cin>>t;
        arr.insert(arr.begin(), t);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}