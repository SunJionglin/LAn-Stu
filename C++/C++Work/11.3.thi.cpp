#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    int tem_max=0;
    int tem_min=0;
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
            tem_max=i;
        }
        if(arr[i]<min){
            min=arr[i];
            tem_min=i;
        }
    }
    cout<<"max:"<<max<<' '<<tem_max<<endl;
    cout<<"min:"<<min<<' '<<tem_min<<endl;
    return 0;
}