#include<iostream>
using namespace std;
int main(){
    int a,b ,c,d;
    cin>>a>>b>>c>>d;
    int min = (b==0 ? 0 : 60-b)+d;
    if(min>=60){
        min-=60;
        a--;
    }
    int hour = min==0 ? c-a : c-a-1;
    cout<<hour<<" "<<min<<endl; 
    return 0;
}