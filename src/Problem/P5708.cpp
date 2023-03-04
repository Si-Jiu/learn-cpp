/**
 * @file P5708.cpp
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
    double a, b, c, p;
    cin >> a >> b >> c;
    p = 0.5 * (a + b + c);
    printf("%.1f", sqrt(p * (p - a) * (p - b) * (p - c)));

    return 0;
}
