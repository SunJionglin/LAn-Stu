#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int dis = x * x + y * y;
    int score = 0;
    if (dis<= 1) {       
        score = 10;
    } else if (dis <= 4) {
        score = 9;
    } else if (dis <= 9) { 
        score = 8;
    } else if (dis <= 16) { 
        score = 7;
    } else if (dis <= 25) {
        score = 6;
    } else if (dis <= 36) {
        score = 5;
    } else if (dis <= 49) { 
        score = 4;
    } else if (dis <= 64) { 
        score = 3;
    } else if (dis <= 81) { 
        score = 2;
    } else if (dis <= 100) { 
        score = 1;
    }
    
    cout << score << endl;
    
    return 0;
}