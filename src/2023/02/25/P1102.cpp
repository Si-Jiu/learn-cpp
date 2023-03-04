/**
 * @file P1102.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-02-25
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, c, ans = 0;
    cin >> n >> c;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        ans += ((upper_bound(a, a + n, a[i] + c) - a) - (lower_bound(a, a + n, a[i] + c) - a));
    cout << ans;
    return 0;
}
