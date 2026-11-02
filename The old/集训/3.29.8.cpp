#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        bool jud=1;
        int arr[9][9];
        for(int i = 0 ; i < 9 ; i++){
            for(int j=0;j<9;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<9;i++){
            bool bre=0;
            bool lin[9]={0};
            bool lis[9]={0};
            for(int j=0;j<9;j++){
                if(lin[arr[i][j]-1] || lis[arr[j][i]-1]){
                    bre=1;
                    jud=0;
                    break;
                }
                else{
                    lin[arr[i][j]-1]=1;
                    lis[arr[j][i]-1]=1;
                }
            }
            if(bre){
                break;
            }
        }
        bool jud_1=1;
        int c = 3;
        int lin=0;
        bool jum=0;
        while(c--){
            int lis=0;
            int d=3;
            while(d--){
                bool bre[9]={0};
                for(int i=lin;i<lin+3;i++){
                    for(int j=lis;j<lis+3;j++){
                        if(bre[arr[i][j]-1]){
                            jum=1;
                            jud_1=0;
                            break;
                        }
                        else{
                            bre[arr[i][j]-1]=1;
                        }
                    }
                    if(jum){
                        break;
                    }
                }
                if(jum){
                    break;
                }
                lis+=3;
            }
            if(jum){
                break;
            }
            lin+=3;
        }
        if(jud && jud_1){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}