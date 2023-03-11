/**
 * @file T230420.cpp
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

int main()
{
    short n, m;
    unsigned long long up = 1;
    cin >> n >> m;
    for (short i = n, j = 1; i >= (n - m + 1); i--, j++)
        up = up * i / j;
    cout << up;

    return 0;
}
