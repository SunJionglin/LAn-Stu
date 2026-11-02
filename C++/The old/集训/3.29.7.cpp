#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int hig=0;
    vector<int> hes;
    
    for(int i=a;i<=b;i++){
        int current = i; 
        int n=0;          
        
        while(true){    
            string arr = to_string(current);
            int tot=1;
            for(char & k : arr){
                tot*=(k-'0');
            }
            n++; 
            
            if(tot<10){
                if(n == hig){
                    hes.push_back(i);
                }
                if(n > hig){
                    hes.clear();
                    hes.push_back(i);
                    hig = n; 
                }
                break;  
            }
            current = tot;  
        }
    }
    cout <<hig<< endl;
    for(int num : hes){
        cout << num << ' ';
    }
    cout << endl;

    return 0;
}