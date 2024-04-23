#include <iostream>
using namespace std;

int main()
{
    /*cout << sizeof(char) << endl;
    cout << sizeof(string) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(void) << endl;
    */

    int a;
    int *p;
    p = &a;
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
    *p = 1;
    cout << a << endl;
    return 0;
}
