#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // 排序，使 a ≤ b ≤ c
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    // 1. 三角形合法性
    if (a + b <= c) {
        cout << "Not triangle" << endl;
        return 0;
    }

    // 平方（安全转换）
    long long a2 = 1LL * a * a;
    long long b2 = 1LL * b * b;
    long long c2 = 1LL * c * c;

    // 2. 按角分类（只比较两短边的平方和与长边平方）
    if (a2 + b2 == c2)
        cout << "Right triangle" << endl;
    else if (a2 + b2 > c2)
        cout << "Acute triangle" << endl;
    else
        cout << "Obtuse triangle" << endl;

    // 3. 按边分类
    if (a == b || b == c)
        cout << "Isosceles triangle" << endl;
    if (a == b && b == c)
        cout << "Equilateral triangle" << endl;

    return 0;
}