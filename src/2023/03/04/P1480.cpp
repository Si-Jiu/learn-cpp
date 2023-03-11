/**
 * @file P1480.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-05
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

const int LEN = 5000;

short a[LEN], c[LEN];
long long b;

void read(short num[])
{
    memset(num, 0, 1010);
    string temp;
    cin >> temp;
    for (short i = 0, j = temp.length() - 1; i < temp.length(); i++, j--)
        num[j] = temp[i] - '0';
}

long long div()
{
    memset(c, 0, 2 * LEN);
    long long r = 0;
    for (int i = LEN - 1; i >= 0; i--)
    {
        r = r * 10 + a[i];
        c[i] = r / b;
        r %= b;
    }
    return r;
}

void print()
{
    int pos = LEN - 1;
    while (pos > 0 && c[pos] == 0)
        pos--;
    for (int i = pos; i >= 0; i--)
        cout << c[i];
}

int main()
{
    read(a);
    cin >> b;
    div();
    print();

    return 0;
}
