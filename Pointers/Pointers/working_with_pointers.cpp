#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int* p = &a;
    int b = 20;
    *p = b;
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << p+1 << endl; // the address that comes after a so hexadecimal +4 not +1 because int
    cout << *p+1 << endl;
    cout << *(p+1) << endl;
    return 0;
}
