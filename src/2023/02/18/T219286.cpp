/**
 * @file T219286.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-02-18
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cstdio>
#include <iostream>

using namespace std;

void bubble_sort(int data[], int n)
{
    bool changed = true;
    while (changed)
    {
        changed = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (data[i] > data[i + 1])
            {
                swap(data[i], data[i + 1]);
                changed = true;
            }
        }
    }
}

int main()
{
    unsigned short n;
    cin >> n;
    int arr[n];
    for (short i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr, n);
    for (short i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}
