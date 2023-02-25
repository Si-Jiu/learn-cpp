/**
 * @file P1223.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-02-24
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cstdio>
#include <iostream>

using namespace std;

double bubble_sort(int data[], int n)
{
    bool changed = true;
    unsigned long long sum = 0;
    while (changed)
    {
        changed = false;
        for (int i = 1; i < n; i++)
        {
            sum += data[i];
            if (data[i] < data[i + 1])
            {
                swap(data[i], data[i + 1]);
                changed = true;
            }
        }
    }
    return sum * 1.0 / n;
}

int main()
{
    short n;
    cin >> n;
    int time[n];
    for (short index = 0; index < n; index++)
    {
        cin >> time[index];
    }
    printf("%.2lf", bubble_sort(time, n));

    return 0;
}
