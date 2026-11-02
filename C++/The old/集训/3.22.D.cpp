#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        int A,B,C;
        cin>>A>>B>>C;
        if(C==A*B && C==A+B){
            cout<<"zhe du shi sha ya!"<<endl;
        }
        else if(C==A*B){
            cout<<"Lv Yan"<<endl;
        }
        else if(C==A+B){
            cout<<"Tu Dou"<<endl;
        }
        else{
            cout<<"zhe du shi sha ya!"<<endl;
        }
    }
    return 0;
}