#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void act1(vector<int> &v){
    int Lo;
    cin>>Lo;
    vector<int> ori(Lo);
    for(int i=0;i<Lo;i++){
        cin>>ori[i];
    }
    int Lt;
    cin>>Lt;
    vector<int> temp(Lt);
    for(int i=0;i<Lt;i++){
        cin>>temp[i];
    }
    auto it = search(v.begin(),v.end(),ori.begin(),ori.end());
    if(it!=v.end()){
        v.erase(it,it+Lo);
        v.insert(it,temp.begin(),temp.end());
    }
}
void act2(vector<int> &v){
    int i = 0;
    while (i < (int)v.size() - 1) {
        if ((v[i] + v[i+1]) % 2 == 0) {
            int avg = (v[i] + v[i+1]) / 2;
            v.insert(v.begin() + i + 1, avg);
            i += 2;
        } else {
            i++;
        }
    }
}
void act3(vector<int> &v){
    int l,r;
    cin>>l>>r;
    reverse(v.begin()+l-1,v.begin()+r);
}

int main(){
    int N,M;
    cin>>N>>M;
    vector<int> v(N);
    for(int i=0;i<N;i++){
        cin>>v[i];      
    }
    int L = v.size();
    while(M--){
        int act;
        cin>>act;
        switch(act){
            case 1:
                act1(v);
                break;
            case 2:
                act2(v);
                break;
            case 3:
                act3(v);
                break;
        }
    }
    for(auto & i : v){
        cout<<i;
        if(&i!=&v.back()){
            cout<<" ";
        }
    }
    return 0;
}