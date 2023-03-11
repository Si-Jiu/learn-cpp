/**
 * @file P5716.cpp
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

short month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, y, m;

void leap()
{
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        month[1]++;
}

int main()
{
    cin >> y >> m;
    leap();
    cout << month[m - 1];

    return 0;
}
