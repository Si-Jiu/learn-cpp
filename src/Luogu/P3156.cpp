/**
 * @file P3156.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-01-29
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cstdio>

using namespace std;

int main()
{
    // 输入
    int n, m;
    scanf("%d %d", &n, &m);
    long long id[n];
    int a[m];
    for (short i = 0; i < n; i += 1)
    {
        scanf("%lld", &id[i]);
    }
    for (short i = 0; i < m; i += 1)
    {
        scanf("%d", &a[i]);
    }

    // 输出
    for (int i = 0; i < m; i += 1)
    {
        printf("%lld\n", id[a[i] - 1]);
    }

    return 0;
}
