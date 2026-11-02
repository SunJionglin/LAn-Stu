#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int a=1e5,b=0;
    int num=0;
    int tal=0;
    int hes=0;
    vector<int> B;
    for(int & i : arr){
        if(i<a){
            a=i;
            tal++;
            continue;
        }
        if(i>b){
            B.push_back(b);
            b=i;
            continue;
        }
        if(i>a && i<b){
            num+=2;
            sort(B.begin(),B.end(),[](int a,int b){
               return a>b;
            });
            hes = tal>hes ? tal : hes;
            for(int  j=0;j<B.size();j++){
                if(B[j]<i){
                    b=j;
                    tal =j+1;
                }
            }
            a=i;
        }
    }
    hes=tal>B.size() ? (hes>tal ?  hes : tal) : (hes>B.size() ? hes  : B.size());
    num+=2;

    cout<<num<<' '<<hes<<endl;

}