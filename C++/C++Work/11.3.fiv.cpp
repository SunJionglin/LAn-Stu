#include<iostream>
#include<vector>
using namespace std;
double average(int arr[]){
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=arr[i];
    }
    return (double)sum/10;
}

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    double avg=average(arr);
    vector<int> arr_z;
    vector<int> arr_f;
    vector<int> arr_a;
    int cou_z=0,cou_f=0,cou_0=0;
    for(int i=0;i<10;i++){
        if(arr[i]>0){
            arr_z.push_back(arr[i]);
            cou_z++;
        }
        else if(arr[i]<0){
            arr_f.push_back(arr[i]);
            cou_f++;
        }
        else{
            cou_0++;
        }
        if(arr[i]>avg){
            arr_a.push_back(arr[i]);
        }
    }
    cout<<"cout_z: "<<cou_z<<endl;
    cout<<"cout_f: "<<cou_f<<endl;
    cout<<"cout_0: "<<cou_0<<endl;
    cout<<"正数：";
    for(int &i:arr_z){
        cout<<i<<' ';
    }
    cout<<endl;
    cout<<"负数：";
    for(int &i:arr_f){
        cout<<i<<' ';
    }
    cout<<endl;
     cout<<"大于平均值的数：";
    for(int &i:arr_a){
       cout<<i<<' ';
    }
    cout<<endl;

}
