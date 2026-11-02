#include<iostream>
using namespace std;

int main() {
    int cou=0;
    for(int a=5;a<=100;a+=5){
        for(int b=5;b<=100;b+=5) {
            for(int c = 5; c <= 100; c += 5) {
                if(a*1+b*2+c*5==100) {
                    cout<<"1分"<<a<<" 2分 "<<b<<" 5分 "<<c<< endl;
                    cou++;
                }
            }
        }
    }
    cout<<cou<<endl;
    return 0;
}
