#include<iostream>
using namespace std;
bool ev (int & x){
    if(x%2==0)return true;
    else return false;
}
bool bs(int &x){
    if(x>4&&x<=12)return true;
    else return false;
}
int main(){
    int x;
    cin>>x;
    bool a=ev(x);
    bool b=bs(x);
    bool A=false,U=false,B=false,Z=false;
    if(a&&b){
        A=true;
    }
    if(a||b){
        U=true;
    }
    
    if(a&&!b || b&&!a){
        B=true;
    }
    if(!a&&!b){
        Z=true;
    }
    cout<<A<<' '<<U<<' '<<B<<' '<<Z<<endl;
    return 0;
}