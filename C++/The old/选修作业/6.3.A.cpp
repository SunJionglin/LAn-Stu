#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int max=a[0];
    int min=a[0];
    int ans=0;
    for(int & i:a){
        if(i>max){
            ans++;
            max=i;
        }
        else if(i<min){
            ans++;
            min=i;
        }
    } 
    cout<<ans<<endl;
    return 0;
}