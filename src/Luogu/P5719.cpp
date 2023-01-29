/**
 * @file P5719.cpp
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
 * @brief 求数组a内数字的和
 *
 * @param a 要求的数组地址
 * @return int 数组内数字的和
 */
int ArrarySum(short *a, short n)
{
    int count = 0;
    for (short index = 0; index < n; index += 1)
    {
        count += a[index];
    }

    return count;
}

int main()
{
    //输入
    short n, k;
    scanf("%hd %hd", &n, &k);

    //处理
    short a[n], b[n], aIndex = 0, bIndex = 0;
    for (short i = 1; i <= n; i += 1)
    {
        if (i % k == 0)
        {
            a[aIndex] = i;
            aIndex += 1;
        }
        else
        {
            b[bIndex] = i;
            bIndex += 1;
        }
    }

    //输出
    printf("%.1f %.1f", ArrarySum(a, aIndex) * 1.0 / aIndex, ArrarySum(b, bIndex) * 1.0 / bIndex);

    return 0;
}
