/**
 * @file P1303.cpp
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

const int LEN = 2005;

short a[LEN], b[LEN], c[LEN+LEN+30];

void read(short num[])
{
    memset(num, 0, 2*(LEN+LEN));
    string temp;
    cin >> temp;
    for (short i = 0, j = temp.length() - 1; i < temp.length(); i++, j--)
        num[j] = temp[i] - 48;
}

void mul()
{
    memset(c, 0, 2 * (LEN + LEN));
    for (int i = 0; i < LEN; i++)
    {
        for (int j = 0; j < LEN; j++)
        {
            c[i + j] += a[i] * b[j];
            if (c[i + j] >= 10)
            {
                c[i + j + 1] += c[i + j] / 10;
                c[i + j] %= 10;
            }
        }
    }
}

void print()
{
    int pos = (LEN+LEN) - 1;
    while (pos > 0 && c[pos] == 0)
        pos--;
    for (int i = pos; i >= 0; i--)
        cout << c[i];
}

int main()
{
    read(a);
    read(b);
    mul();
    print();

    return 0;
}
