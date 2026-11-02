#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<0 || y<0){
            cout<<"NO"<<endl;
        }
        bool j_x = (x%2==0);
        bool j_y = (y%2==0);
        if(j_x && j_y){
            cout<<"YES"<<endl;
            
        }
        else if(!j_x && !j_y){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}