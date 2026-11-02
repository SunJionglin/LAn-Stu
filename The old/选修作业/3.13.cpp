#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
 

int main() {
    int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int n, m;
    cin >> n >> m;
    bool infected[1001][1001];
    int neighbor_inf[1001][1001];
    memset(infected, false, sizeof(infected));
    memset(neighbor_inf, 0, sizeof(neighbor_inf));

    queue<pair<int, int>> q;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        infected[x][y] = true;
        q.push({x, y}); 
    }
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        // 遍历四个方向的邻居
        for (auto [dx, dy] : dirs) {
            int nx = x + dx;
            int ny = y + dy;
            // 边界检查：格子在n*n范围内，且未被感染
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= n && !infected[nx][ny]) {
                neighbor_inf[nx][ny]++;
            }
        }
    }

    // 第二步：收集所有满足感染条件的待感染格子（未感染 + 相邻感染数≥2）
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (!infected[i][j] && neighbor_inf[i][j] >= 2) {
                q.push({i, j});
            }
        }
    }

    // 第三步：BFS处理感染过程
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (infected[x][y]) continue;  // 已感染则跳过（避免重复处理）

        // 标记当前格子为感染
        infected[x][y] = true;

        // 更新当前格子的所有邻居的相邻感染数
        for (auto [dx, dy] : dirs) {
            int nx = x + dx;
            int ny = y + dy;
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= n && !infected[nx][ny]) {
                neighbor_inf[nx][ny]++;
                // 若更新后满足感染条件，加入队列
                if (neighbor_inf[nx][ny] >= 2) {
                    q.push({nx, ny});
                }
            }
        }
    }

    // 检查是否所有格子都被感染
    bool all_infected = true;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (!infected[i][j]) {
                all_infected = false;
                break;  // 提前退出内层循环
            }
        }
        if (!all_infected) break;  // 提前退出外层循环
    }

    cout << (all_infected ? "YES" : "NO") << endl;

    return 0;
}