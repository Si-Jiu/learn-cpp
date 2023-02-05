/**
 * @file T182602.cpp
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

void encryption(string original)
{
    if (original.length() == 3)
    {
        cout << original[0] << original[2] << original[1];
        return;
    }
    int temp = original.length() / 3;
    encryption(original.substr(0, temp));
    encryption(original.substr(temp + temp, temp));
    encryption(original.substr(temp, temp));

    return;
}

int main()
{
    // 变量
    string original;

    // 输入
    cin >> original;

    // 处理+输出
    encryption(original);

    return 0;
}
