/**
 * @file P5743.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @date 2023-01-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

int main()
{
    short n;
    int count = 1;
    cin >> n;
    for (short i = 1; i < n; i++)
        count = (count + 1) * 2;
    cout << count;

    return 0;
}
