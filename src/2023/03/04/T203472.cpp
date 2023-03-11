/**
 * @file T203473.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

const int LEN = 10086;

short a[LEN], b[LEN], c[LEN];

void read(short num[])
{
    memset(num, 0, 2 * LEN);
    string temp;
    cin >> temp;
    for (short i = 0, j = temp.length() - 1; i < temp.length(); i++, j--)
        num[j] = temp[i] - '0';
}

void sub(short a[], short b[])
{
    memset(c, 0, 2 * LEN);
    for (int i = 0; i < LEN; i++)
    {
        if (a[i] < b[i])
        {
            a[i + 1]--;
            a[i] += 10;
        }
        c[i] = a[i] - b[i];
    }
}

void print()
{
    int pos = LEN - 1;
    while (pos > 0 && c[pos] == 0)
        pos--;
    for (int i = pos; i >= 0; i--)
        cout << c[i];
}

int test(short c[])
{
    int pos = LEN - 1;
    while (pos > 0 && c[pos] == 0)
        pos--;
    return pos;
}

int main()
{
    read(a);
    read(b);
    int indexA = test(a), indexB = test(b);
    if (indexA < indexB)
    {
        cout << '-';
        sub(b, a);
    }
    else
    {
        sub(a, b);
    }

    print();

    return 0;
}
