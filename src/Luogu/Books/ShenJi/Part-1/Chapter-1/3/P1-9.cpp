#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double r        = 5;
    const double PI = 3.141593;
    //#define PI 3.141593
    cout << 2 * PI * r << endl;
    cout << PI * r * r << endl;
    cout << 4.0 / 3 * PI * pow(r, 3) << endl; // 不能写成 4/3*PI*pow(r,3)
    return 0;
}
