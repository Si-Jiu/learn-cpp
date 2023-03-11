/**
 * @file P1029.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-11
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <algorithm>
#include <iostream>

using namespace std;
int x, y, cnt = 0;
int main()
{
    cin >> x >> y;
    for (int p = x; p <= y; p++)
    {
        int q = x * y / p;
        if (__gcd(p, q) == x && q * p / __gcd(q, p) == y)
            cnt++;
    }
    cout << cnt;

    return 0;
}
