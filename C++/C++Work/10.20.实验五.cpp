#include<iostream>
using namespace std;
int main(){
    int y,m,d;
    cin>>y>>m>>d;
    if(m<3){
        y--;
        m+=12;
    }
    int W=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
    switch(W){
        case 0: cout<<"星期天"<<endl; break;
        case 1: cout<<"星期一"<<endl; break;
        case 2: cout<<"星期二"<<endl; break;
        case 3: cout<<"星期三"<<endl; break;
        case 4: cout<<"星期四"<<endl; break;
        case 5: cout<<"星期五"<<endl; break;
        case 6: cout<<"星期六"<<endl; break;
    }
    return 0;
}