#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int* p = &a;
    int** q= &p;

    cout << a << endl; //value of a
    cout << &a << endl; //address of a
    cout << p << endl; //address of a
    cout << &p << endl; //address of p
    cout << *p << endl; //value of a
    cout << q << endl; //address of p
    cout << *q << endl; //value of p(address of a)
    cout << **q << endl; //value of a
    return 0;
}
