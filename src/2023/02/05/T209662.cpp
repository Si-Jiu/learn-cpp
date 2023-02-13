/**
 * @file T209662.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-02-05
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    // 变量
    short bits[32] = {};
    unsigned int a;
    short index = 0, position = 31;

    // 输入
    scanf("%d", &a);

    // 处理
    // 转为二进制
    while (a != 0)
    {
        bits[index] = a % 2;
        a /= 2;
        index++;
    }
    index = 0;
    a = 0;
    //转为十进制
    while (position <= 0)
    {
        a += pow(bits[index], position);
        index++;
        position--;
    }

    //输出
    printf("%d", a);

    return 0;
}
