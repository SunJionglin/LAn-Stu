#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    string s;
    string a;
    cin>>a;
    for (i = 1; i < a.size(); i++) {
      if ((a[i]-'0') % 2 == (a[i-1]-'0') % 2) {
        s += max(a[i], a[i-1]);
      }
    }
    string t;
    string b;
    cin>>b;
    for (i = 1; i < b.size(); i++) {
      if ((b[i]-'0') % 2 == (b[i-1]-'0') % 2) {
        t += max(b[i], b[i-1]);
      }
    }
    for(char & A : a){
        for(char & B : b){
            if(A!=B){
                cout<<a<<endl;
                cout<<b<<endl;
                return 0;
            }
        }
    }
    cout<<a<<endl;
    return 0;
}