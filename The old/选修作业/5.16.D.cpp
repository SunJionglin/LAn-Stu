#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(2*n);
        for(int i=0;i<2*n;i++)cin>>a[i];
        vector<int> mex;
        for(int i=0;i<2*n;i++){
            
            if(i+1<2*n && i-1>=0 && a[i-1]==a[i+1]  ){
                vector<int> temp;
                temp.push_back(a[i]);
                for(int j=i+1;j<2*n;j++){
                    if(2*i-j<0)break;
                    if(a[j]==a[(2*i)-j])temp.push_back(a[j]);
                    else break;
                }
                if(temp.size()==0)continue;
                sort(temp.begin(),temp.end());
                int now=0;
                for(auto x:temp){
                    if(x==now) now++;
                    else if(x>now) break;
                }
                mex.push_back(now);     
            }
            if(i-1>=0&&a[i-1]==a[i] ){
                vector<int> temp;
                for(int j=i;j<2*n;j++){
                    if(2*i-j-1<0)break;
                    if(a[j]==a[(2*i)-j-1])temp.push_back(a[j]);
                    else break;
                }
                if(temp.size()==0)continue;
                sort(temp.begin(),temp.end());
                int now=0;
                for(auto x:temp){
                    if(x==now) now++;
                    else if(x>now) break;
                }
                mex.push_back(now);     
            }
        }
        sort(mex.begin(),mex.end());
        int ans=*(mex.end()-1);
        cout<<ans<<endl;
    }
}