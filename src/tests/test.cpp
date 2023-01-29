/**
 * @file test.cpp
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
    short count = 0;
    cout << "short a[]={";
    for (short i = 1; i <= 100; i++)
    {
        count += i;
        cout << count << ',';
    }
    cout << '}';

    return 0;
}
