#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i = 0;i<10;i++){
        cout<<arr[i]<<" ";                 
    }
    cout<<endl;
    cout<<"a[0]is: "<<arr[0]<<endl ;
    cout<<"a[1]is: "<<arr[1]<<endl;
    cout<<"因为a[0]=1,所以a[0]是第一个元素"<<endl;
}