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

bool IsPalindrome(string o)
{
    int l = 0, r = o.length() - 1;
    while (true)
    {
        if (l == r || l == r - 1)
        {
            break;
        }
        if (o[l] == o[r])
        {
            l++;
            r--;
            continue;
        }
        return false;
    }
    return true;
}

int main()
{
    /*
    date1 对应题目中的date1
    date2 同上

    t1 用字符串的方法输入的一个临时变量
    t2 同上

    */
    string t1, t2;
    cin >> t1 >> t2;

    if (t1 == t2)
    {
        cout << IsPalindrome(t1) << endl;
    }

    date date1, date2;
    int count = 0;

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
                t1 = "";
                t1 += to_string(year);
                if (month < 10)
                {
                    t1 += "0";
                }
                t1 += to_string(month);
                if (day < 10)
                {
                    t1 += "0";
                }
                t1 += to_string(day);
                if (IsPalindrome(t1))
                {
                    count++;
                }
            }
        }
    }

    cout << count;

    return 0;
}
