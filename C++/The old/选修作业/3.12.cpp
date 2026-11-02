#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, unordered_map<char, int>> num_color;
    vector<pair<int, int>> pairs;

    for (int idx = 1; idx <= n; ++idx) {
        int num;
        char color;
        cin >> num >> color;
        if (num_color[num].find(color) == num_color[num].end()) {
            num_color[num][color] = idx;
        }
    }

    for (auto& [num, color2idx] : num_color) {
        vector<int> available;
        for (auto& [color, idx] : color2idx) {
            available.push_back(idx);
        }
        for (int i = 0; i + 1 < available.size(); i += 2) {
            pairs.emplace_back(available[i], available[i+1]);
        }
    }

    cout << pairs.size() * 2 << '\n';
    for (auto& p : pairs) {
        cout << p.first << ' ' << p.second << '\n';
    }

    return 0;
}