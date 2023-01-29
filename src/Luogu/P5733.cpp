/**
 * @file P5733.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-01-29
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    cin >> a;
    for (short i = 0; i < a.length(); i += 1)
    {
        if ('a' <= a[i] && a[i] <= 'z')
        {
            cout << char(a[i] + 'A' - 'a');
        }
        else
        {
            cout << a[i];
        }
    }

    return 0;
}
