/**
 * @file P5742.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @date 2023-01-28
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cstdio>

using namespace std;

struct Student
{
    int id;
    short score, extraScore;
    short SumScore()
    {
        return score + extraScore;
    }
};

bool IsExcellent(Student a)
{
    if ((a.SumScore() > 140) && (a.score * 7 + a.extraScore * 3 >= 800))
    {
        return true;
    }
    return false;
}

int main()
{
    // 输入
    short n;
    scanf("%hd", &n);
    Student students[n];
    for (short i = 0; i < n; i += 1)
    {
        scanf("%d %hd %hd", &students[i].id, &students[i].score, &students[i].extraScore);
    }

    // 处理+输出
    for (short i = 0; i < n; i += 1)
    {
        if (IsExcellent(students[i]))
        {
            printf("Excellent\n");
            continue;
        }
        printf("Not excellent\n");
    }

    return 0;
}
