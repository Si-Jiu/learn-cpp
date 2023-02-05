/**
 * @file T160272.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-02-05
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

struct stu
{
    string name;
    short score;
};

bool comp(stu a, stu b)
{
    if (a.score == b.score)
    {
        return a.name < b.name;
    }
    return a.score > b.score;
}

int main()
{
    // 变量和输入
    short n, k;
    cin >> n >> k;
    stu students[n];
    for (short index = 0; index < n; index++)
    {
        cin >> students[index].name >> students[index].score;
    }

    // 排序
    sort(students, students + n, comp);

    //输出
    cout << students[k - 1].name;

    return 0;
}
