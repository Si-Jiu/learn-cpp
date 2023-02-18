/**
 * @file P1116.cpp
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

int bubble_sort(unsigned short data[], short n)
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (data[j] > data[i])
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    unsigned short n;
    cin >> n;
    unsigned short nums[n];
    for (unsigned short i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << bubble_sort(nums, n);

    return 0;
}
