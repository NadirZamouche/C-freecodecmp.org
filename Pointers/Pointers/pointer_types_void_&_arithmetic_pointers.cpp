#include <iostream>
using namespace std;

int main()
{
    int a = 1025;
    int* p;
    p = &a;
    char* p0;
    p0 = (char*)p;
    cout << p << endl;
    cout << *p << endl;
    //Arithmetic pointer:
    cout << p+1 << endl; // the address that comes after a so hexadecimal +4 not +1 because int
    cout << *(p+1) << endl;
    //Typecasting:
    cout << p0 << endl;
    cout << *p0 << endl;
    cout << p0+1 << endl; // the address that comes after a so hexadecimal +4 not +1 because int
    cout << *(p0+1) << endl;
    //Void pointer - Generic pointer
    void* p1 = p;
    cout << p1 << endl;
    cout << p1+1 << endl;
    return 0;
}
