#include<iostream>
#include<string>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        string s,t;
        cin>>s>>t;
        const string & max_str=s.size()>t.size() ? s:t;
        const string & min_str=s.size()>t.size() ? t:s;
        int ser=0;
        for(auto &i:min_str){
            if(max_str [ser]!=i){
                break;
            }
            ser++;
        }
        if(ser!=0){
            ser--;
        }
        int tot=s.size()+t.size()-ser;
        cout<<tot<<endl;

    }
    return 0;
    
}