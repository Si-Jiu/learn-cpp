/**
 * @file test2.cpp
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

    return 0;
}
