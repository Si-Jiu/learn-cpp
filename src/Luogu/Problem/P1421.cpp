/**
 * @file P1421.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @date 2023-01-22
 *
 * 不会有什么注释的, 做好心理准备 :)
 *
 */
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double money = 0, t;
    cin >> t;
    money += t;
    cin >> t;
    money += t * 0.1;
    cout << floor(money / 1.9);

    return 0;
}
