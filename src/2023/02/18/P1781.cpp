/**
 * @file P1781.cpp
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
#include <cstring>
#include <iostream>

using namespace std;

struct president
{
    string vote;
    short num;
};

bool comp(const president &a, const president &b)
{
    if (a.vote.length() == b.vote.length())
    {
        return a.vote > b.vote;
    }
    return a.vote.length() > b.vote.length();
}

int main()
{
    short n;
    cin >> n;
    president presidents[n];
    for (short i = 0; i < n; i++)
    {
        cin >> presidents[i].vote;
        presidents[i].num = i + 1;
    }
    sort(presidents, presidents + n, comp);
    cout << presidents[0].num << endl;
    cout << presidents[0].vote << endl;

    return 0;
}
