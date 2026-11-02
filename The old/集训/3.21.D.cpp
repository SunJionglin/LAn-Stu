#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char> > arr(n,vector<char> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        bool jud=0;
        int lis = 0;
        int lin = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='#'){
                    for(int k=j;k<m;k++){
                        if(arr[i][m-1]=='#'){
                            lis=ceil((j+1+m)*1.0/2);
                            break;
                        }
                        if(arr[i][k]=='.'){
                            lis=ceil((j+1+k)*1.0/2);
                            break;
                        }
                    }
                    for(int h=i;h<n;h++){
                        if(arr[n-1][lis-1]=='#'){
                            lin=ceil((i+1+n)*1.0/2);
                            break;
                        }
                        if(arr[h][lis-1]=='.'){
                            lin=ceil((i+1+h)*1.0/2);
                            break;
                        }
                    }
                    jud = 1;
                    break;

                }
            }
            if(jud){
                break;
            }
        }
        cout<<lin<<' '<<lis<<endl;
    }
    return 0;
}////