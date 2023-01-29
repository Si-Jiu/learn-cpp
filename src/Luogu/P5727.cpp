/**
 * @file P5727.cpp
 * @author 肆鸠 (si_jiu49@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-01-29
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    vector<short> process;
    short n;
    scanf("%hd", &n);
    process.push_back(n);
    while (n != 1)
    {

        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        process.push_back(n);
    }
    for (short i = process.size() - 1; i > -1; i -= 1)
    {
        printf("%hd ", process[i]);
    }

    return 0;
}
