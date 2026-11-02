#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool zs(int a){
    if(a<2)return false;
    if(a==2)return true;
    else if(a%2==0)return false;
    for(int i =3; i*i<=a; i+=2){
        if(a%i==0)return false;
    }
     return true;
}
int main (){
    int L;
    cin>>L;
    vector<int> zhi;
    int tot=0;
    int num=0;
    for(int i=2;i<L;i++){
        if(zs(i)){
        if(tot+i>L)break;  
        zhi.push_back(i);
        num++;
        tot+=i;
        }
    }
    for(int n:zhi){
        cout<<n<<endl;
    }
    cout<<num<<endl;

return 0;

}