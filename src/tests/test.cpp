/**
 * @file test.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-02-12
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    for (short i = 0; i < 31; i++)
    {
        a *= 2;
    }
    a -= 1;
    cout << a << endl;
    cout << a + 1 << endl;

    return 0;
}
