#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<double> a(N);
    for(int i= 0;i<N;i++){
        cin>>a[i];
    }
    vector<int> mai(N,0);
    double tot=0;
    while(true){
        int var;
        int num;
        cin>>var>>num;
        int ber=var-1;
        if(var==0){
            break;
        }
        mai[ber]+=num;
        tot += a[ber]*num;
    }
    for(int i=0;i<N;i++){
        cout<<mai[i]<<endl;
    }
    cout<<fixed<<setprecision(2)<<tot;
    return 0;

}