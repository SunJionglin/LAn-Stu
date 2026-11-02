#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;bool flag=false;
    cin>>n;
    if(n==0){
        cout<<0<<endl;
        cout<<0<<endl;
        return 0;
    }
    if(n<0){
        flag=true;
        n=-n;
    }
    int temp=n;
    vector<int> Q;
        while(temp>0){
            Q.push_back(temp%8);
            temp/=8;
        }
        if(flag)cout<<"-";
    for(int i=Q.size()-1;i>=0;i--){
        cout<<Q[i];
        
    }
    cout<<endl;
    temp=n;
    vector<char> H;
        while(temp>0){
            char c=(temp%16);
            if(c>=10) c=c-10+'A';
            else c=c+'0';
            H.push_back(c);
            temp/=16;
        }
        if(flag)cout<<"-";
    for(int i=H.size()-1;i>=0;i--){
        cout<<H[i];
    }
    cout<<endl;
    return 0;
}