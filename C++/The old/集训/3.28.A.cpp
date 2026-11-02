#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        string s = to_string(a);
        bool ok = 1;
        if (s.size() < 3) ok = 0;
        else if (s[0] != '1' || s[1] != '0') ok = 0;
        else {
            string tail = s.substr(2);
            if (tail[0] == '0') ok = 0;
            if (tail == "1") ok = 0;
        }
        cout << (ok ? "Yes" : "No") << '\n';
    }
    return 0;
}