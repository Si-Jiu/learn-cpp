/**
 * @file P5735.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-01-29
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("%.2f", sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2)) +
                       sqrt(pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2)) +
                       sqrt(pow(abs(x2 - x3), 2) + pow(abs(y2 - y3), 2)));

    return 0;
}
