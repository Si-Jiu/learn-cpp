/**
 * @file P2249.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @date 2023-01-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    // 输入
    int n, m;
    scanf("%d %d", &n, &m);
    long long a[n];
    int find[m];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &find[i]);

    // 寻找
    int out_index[m];
    memset(out_index, -1, sizeof(out_index));
    for (int i = 0; i < m; i++)
    {
        if (binary_search(a, a + n, find[i]))
        {
            out_index[i] = lower_bound(a, a + n, find[i]) - a + 1;
        }
    }

    // 输出
    for (int i = 0; i < m; i++)
        printf("%d ", out_index[i]);

    return 0;
}
