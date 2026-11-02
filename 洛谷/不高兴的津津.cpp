#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[7];
    for(int i=0;i<7;i++){
        int a,b;
        cin>>a>>b;
        arr[i]=a+b;
    }
    int max=0;
    int day=0;
    bool jud=false;
    for(int i=0;i<7;i++){
        if(arr[i]>8){
            if(arr[i]>max)
            {
                max=arr[i];
                day=i+1;
            }
            jud=true;
        }
    }
    cout<<(!jud ? 0 : day)<<endl;
    return 0; 
}