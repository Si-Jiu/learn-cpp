/**
 * @file P5726.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @date 2023-01-27
 *
 * 不会有什么注释的, 做好心理准备 :)
 *
 */
#include <cstdio>

using namespace std;
short n;

short array_max_min(short *array, bool chooseMinMax)
{
    short Index = -1, Value;
    if (chooseMinMax)
        Value = -1;
    else
        Value = 11;
    for (short i = 0; i < n; i++)
    {
        if (chooseMinMax)
        {
            if (array[i] > Value)
            {
                Value = array[i];
                Index = i;
            }
        }
        else
        {
            if (array[i] < Value)
            {
                Value = array[i];
                Index = i;
            }
        }
    }
    return Index;
}

int main()
{
    // 输入
    scanf("%hd", &n);
    short judges[n];
    for (short i = 0; i < n; i++)
        scanf("%hd", &judges[i]);

    // 求去最大最小和
    short mx = array_max_min(judges, false), mn = array_max_min(judges, true), count = 0;
    for (short i = 0; i < n; i++)
    {
        if (i == mx || i == mn)
            continue;
        count += judges[i];
    }
    printf("%.2f", count * 1.0 / (n - 2));

    return 0;
}
