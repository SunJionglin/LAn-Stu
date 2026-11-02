#include <iostream>
using namespace std;
int main(){
    int a;
    bool b;
    cin>>a>>b;
    if(b){
        cout<<'-'<<endl;
    }
    else{
        switch(a){
            case 0 :
                cout<<"biii"<<endl;
                break;
            case 1 :
                cout<<"dudu"<<endl;
                break;
            case 2 :
                cout<<"-"<<endl;
                break;
        }
    }
    switch(a){
            case 0 :
                cout<<"stop"<<endl;
                break;
            case 1 :
                cout<<"move"<<endl;
                break;
            case 2 :
                cout<<"stop"<<endl;
                break;
    }
    return 0;
    
}