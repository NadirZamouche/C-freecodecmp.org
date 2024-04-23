#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << 5 << endl;
    cout << 5 + 2 << endl;
    cout << 5 - 2 << endl;
    cout << 5 * 2 << endl;
    cout << 8 / 4 << endl;
    cout << 10 % 3 << endl;
    cout << 5 + 4 * 10 << endl;
    cout << (5 + 4) * 10 << endl;

    int x;
    cout << x << endl;
    int wnum = 5;
    wnum++;
    cout << wnum << endl;
    int xbox = 2;
    xbox--;
    cout << xbox << endl;
    int ps1 = 4;
    ps1 +=3;
    cout << ps1 << endl;
    int ps2 = 4;
    ps2 -=3;
    cout << ps2 << endl;
    int ps3 = 4;
    ps3 *=3;
    cout << ps3 << endl;
    int ps4 = 4;
    ps4 /=2;
    cout << ps4 << endl;
    int ps5 = 4;
    ps5 %=2;
    cout << ps5 << endl;

    cout << 10 / 3 << endl;
    cout << 10.0 / 3.0 << endl;

    cout << pow(2, 5) << endl;
    cout << sqrt(36) << endl;
    cout << round(36.5) << endl;
    cout << ceil(36.1) << endl;
    cout << floor(36.5) << endl;
    cout << fmax(4, 10) << endl;
    cout << fmin(4, 10) << endl;
    cout << exp(0) << endl;
    cout << log(1) << endl;
    return 0;
}
