/**
 * @file T219288.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-02-25
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cstdio>
#include <iostream>

using namespace std;

int binary_search(unsigned int arr[], unsigned short len, unsigned int key)
{
    int left = 0, right = len;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main()
{
    unsigned short n;
    cin >> n;
    unsigned int a[n], x;
    for (unsigned short index = 0; index < n; index++)
        cin >> a[index];
    cin >> x;
    int ans = binary_search(a, n, x);
    if (ans != -1)
        cout << ans + 1;
    else
        cout << -1;

    return 0;
}
