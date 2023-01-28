/**
 * @file P5712.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @date 2023-01-20
 *
 * 不会有什么注释的, 做好心理准备 :)
 *
 */
#include <iostream>

using namespace std;

int main()
{
    short num;
    cin >> num;
    cout << "Today, I ate " << num << " apple";
    if (num > 1)
        cout << "s.";
    else
        cout << '.';

    return 0;
}
