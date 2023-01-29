/**
 * @file P5716.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-01-29
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cstdio>

using namespace std;

/**
 * @brief 判断是否为闰年
 *
 * @param year 要判断的年份
 * @return true 是
 * @return false 不是
 */
bool IsLeap(short year)
{
    if (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0))
    {
        return true;
    }
    return false;
}

int main()
{
    short days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    short year, month;
    scanf("%hd %hd", &year, &month);
    if (month == 2 && IsLeap(year))
    {
        printf("29");
    }
    else
    {
        printf("%hd", days[month-1]);
    }

    return 0;
}
