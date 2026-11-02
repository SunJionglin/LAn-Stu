#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int tot=-1;
        int jud=0;
        for(int x=2;x<=n;x++){
            int tot_x=0;
            for(int k=1;k<=ceil(n/2);k++){
                if(k*x>n){
                    break;
                }
                tot_x+=k*x;
            }
            if (tot_x>tot ? true :false){
                tot=tot_x;
                jud=x;
            }
        }
        cout<<jud<<endl;
    }
    return 0;
}