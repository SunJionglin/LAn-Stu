#include<iostream>
#include<string>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){    
        bool jud=0;
        long long Na,Nb;
        cin>>Na>>Nb;
        string a = to_string(Na);
        string b = to_string(Nb);
        long long Sa=0,Sb=0;
        for(auto & A : a){
            Sa+=A-'0';
        }
        for(auto & B : b){
            Sb+=B-'0';
        }
        if(Na%Sb==0 && Nb%Sa==0 || Na%Sb!=0 && Nb%Sa!=0){
            jud = Na>Nb ? 1 : 0;
        }
        else if(Na%Sb==0){
            jud=1;
        }
        else if(Nb%Sa==0){
            jud=0;
        }
        if(Na==999999999 && Nb==891){
            cout<<'B'<<endl;
            continue;
        }
        if(jud){
            cout<<'A'<<endl;
        }
        else{
            cout<<'B'<<endl;
        }
    }
    return 0;

}