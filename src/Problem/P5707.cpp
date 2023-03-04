/**
 * @file P5707.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-02-25
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int s, v, h = 7, m = 50, t;
    cin >> s >> v;
    t = ceil(1.0 * s / v);
    if (t > 50)
    {
        t -= 50;

        m = t % 60;
        h -= t / 60;
        if (m != 0)
            h -= 1;
        if (h <= 0)
        {
            h = 23 - abs(h);
        }
    }
    else
        m -= t;
    printf("%02d:%02d", h, m);

    return 0;
}
