#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> a(N);
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    int K;
    cin>>K;
    vector<vector<int> > b(K,vector<int>(N));
    for(int i=0;i<K;i++){
        for (int j=0;j<N;j++){
            cin>>b[i][j];
        }
    }
    bool jud=0;
    for(int i=0;i<K;i++){
        for(int j=0;j<N;j++){
            if(a[j]!=b[i][j] && b[i][j]!=0){
                jud=0;
                break;
            }
            else if(a[j]==b[i][j]){
                jud=1;
            }
        }
        if(jud){
            cout<<"Da Jiang!!!"<<endl;
        }
        else{
            cout<<"Ai Ya"<<endl;
        }
    }
    return 0;
}