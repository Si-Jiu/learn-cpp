/**
 * @file P1909.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @date 2023-01-22
 *
 * 不会有什么注释的, 做好心理准备 :)
 *
 */
#include <algorithm>
#include <iostream>

using namespace std;

unsigned short n;

struct packing
{
    unsigned short num, price;
};

bool comp(packing a, packing b)
{
    short i = 1, tan, tap;
    while (a.num * i >= n)
        i++;
    tan = a.num * i;
    tap = a.price * i;
    short j = 1, tbn, tbp;
    while (a.num * j >= n)
        j++;
    tbn = a.num * i;
    tbp = a.price * i;
    if (tap == tbp)
        return tap > tbp;
    return tap < tbp;
}

int main()
{

    packing pencils[3];
    cin >> n >> pencils[0].num >> pencils[0].price >> pencils[1].num >> pencils[1].price >> pencils[2].num >>
        pencils[2].price;
    sort(pencils, pencils + 3, comp);
    int i = 1;
    while (pencils[0].price * i >= n)
        i++;
    i--;
    cout << i * pencils[0].price;

    return 0;
}
