#include<iostream>
using namespace std;
int main(){
    double hei,up,down;
    cin>>hei;
    double sta=(hei-100)*0.9;
    up=sta*1.1;
    down=sta*0.9;
    cout<<up<<endl<<down;
    return 0;
}