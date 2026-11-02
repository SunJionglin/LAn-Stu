#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    using namespace std;
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    bool jud = false;
    bool jud_a=false;
    sort(a,a+4);
    for(int i = 0;i<2;i++){
        for(int j = 1;j<3;j++){
            for(int k =2;k<4;k++){
                if(i+j>k){
                    jud=true;
                    break;
                }
                if(i+j==k){
                    jud_a=true;
                }
            }
            if(jud){
                break;
            }
        }
        if(jud){
            break;
        }
    }
    if(jud){
        cout<<"TRIANGLE"<<endl;
    }
    else if(jud_a){
        cout<<"SEGMENT"<<endl;
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;

}
//a