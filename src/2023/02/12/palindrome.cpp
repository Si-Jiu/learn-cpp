/**
 * @file palindrome.cpp
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
    string o;
    cin >> o;
    int l = 0, r = o.length() - 1;
    while (true)
    {
        if (l == r || l == r - 1)
        {
            break;
        }
        if (o[l] == o[r])
        {
            l++;
            r--;
            continue;
        }
        cout << "False" << endl;
        return 0;
    }
    cout << "True" << endl;

    return 0;
}
