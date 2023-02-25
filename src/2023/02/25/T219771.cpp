/**
 * @file T219771.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-02-25
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    unsigned int a[n];
    for (int index = 0; index < n; index++)
        cin >> a[index];
    cin >> m;
    unsigned int q[m];
    for (int index = 0; index < m; index++)
        cin >> q[index];
    sort(a, a + n);
    for (int index = 0; index < m; index++)
    {
        cout << upper_bound(a, a + n, q[index] + 1) - lower_bound(a, a + n, q[index]) << ' ';
    }

    return 0;
}
