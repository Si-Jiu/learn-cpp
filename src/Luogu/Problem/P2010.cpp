/**
 * @file P2010.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-02-12
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

struct date
{
    short year, month, day;
};

int main()
{
    /*
    date1 对应题目中的date1
    date2 同上

    t1 用字符串的方法输入的一个临时变量
    t2 同上

*/
    date date1, date2;
    string t1, t2;

    // 输入
    cin >> t1 >> t2;

    // 把 输入进去的字符串 切片 然后 转整数
    date1.year = stoi(t1.substr(0, 4));
    date1.month = stoi(t1.substr(4, 2));
    date1.day = stoi(t1.substr(6, 2));

    date2.year = stoi(t2.substr(0, 4));
    date2.month = stoi(t2.substr(4, 2));
    date2.day = stoi(t2.substr(6, 2));

    for (short year = date1.year; year <= date2.year; year++)
    {
        for (short month = date1.month; month <= date2.month; month++)
        {
            for (short day = date1.day; day <= date2.day; day++)
            {
            }
        }
    }

    return 0;
}
