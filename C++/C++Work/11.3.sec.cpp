#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
double average(vector<int> arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    return (double)sum/arr.size();
}
int tot(vector<int> arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    vector<int> arr;
    int n=10;
    while(n--){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    double avg=average(arr);
    int sum=tot(arr);
    cout<<sum<<' '<<fixed<<setprecision(2)<<avg<<endl;

}