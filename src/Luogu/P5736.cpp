/**
 * @file P5736.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-01-29
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cmath>
#include <cstdio>

using namespace std;

/**
 * @brief 判断是否为指数
 *
 * @param num 要判断的数
 * @return true 这个数是质数
 * @return false 这个数不是质数
 */
bool IsPrime(int num)
{
    if (num == 1 || num == 4)
    {
        return false;
    }
    if (num == 2 || num == 3)
    {
        return true;
    }
    if (num % 6 != 1 && num % 6 != 5)
    {
        return false;
    }
    int temp = sqrt(num);
    for (int i = 5; i <= temp; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    //输入
    short n;
    scanf("%hd", &n);
    int a[n];
    for (short index = 0; index < n; index += 1)
    {
        scanf("%d", &a[index]);
    }

    //输出
    for (short index = 0; index < n; index += 1)
    {
        if (IsPrime(a[index]))
        {
            printf("%d ", a[index]);
        }
    }

    return 0;
}
