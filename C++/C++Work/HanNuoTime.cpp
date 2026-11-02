#include <iostream>
#include <ctime>   // clock()头文件
using namespace std;

// 和PPT一模一样的hanio函数
void hanio(int n, char a, char b, char c)
{
    if (n == 1)
        cout << a << "-->" << c << endl;
    else
    {
        hanio(n - 1, a, c, b);
        cout << a << "-->" << c << endl;
        hanio(n - 1, b, a, c);
    }
}

int main()
{
    int n;
    cout << "请输入盘子数量n：";
    cin >> n;

    clock_t start = clock();  // 计时起点

    hanio(n, 'A', 'B', 'C');  // 执行汉诺塔

    clock_t end = clock();    // 计时终点

    // 计算秒数
    double timeCost = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "\n运行时间：" << timeCost << " 秒" << endl;

    return 0;
}