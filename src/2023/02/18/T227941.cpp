/**
 * @file T227941.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-02-18
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <algorithm>
#include <cstdio>
#include <iostream>


bool comp(const unsigned int &a, const unsigned int &b)
{
    return a > b;
}

using namespace std;

int main()
{
    int n;
    cin >> n;
    unsigned arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, comp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}
