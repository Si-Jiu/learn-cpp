/**
 * @file T316754.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-11
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cstdio>
#include <iostream>

using namespace std;

unsigned int n;

void dpf(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt)
            cout << i << ' ' << cnt << endl;
    }
    if (n > 1)
        cout << n << " 1" << endl;
}

int main()
{
    cin >> n;
    dpf(n);

    return 0;
}
