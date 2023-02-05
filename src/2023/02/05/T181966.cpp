/**
 * @file T181966.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-02-05
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 变量
    string verse;
    int occurrences[26] = {};

    // 输入
    getline(cin, verse);

    // 处理
    for (short index = 0; index < verse.length(); index++)
    {
        // 小写字母
        if ('a' <= verse[index] && verse[index] <= 'z')
        {
            occurrences[verse[index] - 'a']++;
        }
        // 大写字母
        if ('A' <= verse[index] && verse[index] <= 'Z')
        {
            occurrences[verse[index] - 'A']++;
        }
    }

    // 输出
    for (short index = 0; index < 26; index++)
    {
        if (occurrences[index] != 0)
        {
            cout << char(index + 'a') << ' ' << occurrences[index] << endl;
        }
    }

    return 0;
}
