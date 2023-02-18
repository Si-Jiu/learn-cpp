/**
 * @file T226996.cpp
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

void insertion_sort(int arr[], int len)
{
    
    for (int i = 1; i < len; i++)
    {
        int pickUp = arr[i];
        int j = i - 1;
        while ((j >= 0) && (pickUp < arr[j]))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = pickUp;
    }
}


int main()
{
    short n;
    cin >> n;
    int data[10000];
    for (short i = 0; i < n; i++)
    {
        cin >> data[i];
    }
    insertion_sort(data, n);
    for (short i = 0; i < n; i++)
    {
        cout << data[i] << ' ';
    }

    return 0;
}
