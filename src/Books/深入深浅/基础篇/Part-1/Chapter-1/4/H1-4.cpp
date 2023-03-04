/**
 * @file H1-4.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-02-28
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    cout << (9 / 3) * (3 / 3) * 9 << endl;
    cout << (24 - 4) / 2 * ((24 - 4) / 2 + 4) << endl;
    cout << 480 / (1.4 + 1) << endl;
    cout << (11 + 1) / (4 - 3) * 3 + 11 << endl;
    cout << 12 * 80 / (120 - 80) << endl;
    cout << 94 / 2 - 35 << ' ' << 35 - (94 / 2 - 35) << endl;
    double xiaoAMoney = 10000, uimMoney = 10000;
    xiaoAMoney = xiaoAMoney * 0.035 + xiaoAMoney;
    xiaoAMoney = xiaoAMoney * 0.035 + xiaoAMoney;
    xiaoAMoney = xiaoAMoney * 0.035 + xiaoAMoney;
    xiaoAMoney = xiaoAMoney * 0.035 + xiaoAMoney;
    xiaoAMoney = xiaoAMoney * 0.035 + xiaoAMoney;
    uimMoney += 400;
    uimMoney += 400;
    uimMoney += 400;
    uimMoney += 400;
    uimMoney += 400;
    cout << xiaoAMoney << ' ' << uimMoney;
    return 0;
}
