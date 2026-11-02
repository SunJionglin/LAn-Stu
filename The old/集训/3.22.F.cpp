#include<string>
#include<iostream>
using namespace std;
int main(){
    string S;
    cin>>S;
    int N;
    cin>>N;
    while(N--){
        int a,b;
        cin>>a>>b;
        string c,d;
        cin>>c>>d;
        string s=S.substr(0+a-1,b-a+1);
        S.erase(S.begin()+a-1,S.begin()+b);
        string tot=c+d;
        size_t pos = S.find(tot);
        if(pos!= std::string::npos){
            S.insert(S.begin()+pos+c.size(),s.begin(),s.end());
        }
        else{
            S+=s;
        }
    }
    cout<<S<<endl;
}
