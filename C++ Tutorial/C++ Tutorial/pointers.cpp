#include <iostream>
using namespace std;

int main()
{
    int age = 20;
    int *pAge = &age;

    double x = 2.99;
    double *pX = &x;

    string name = "Nadir";
    string *pName = &name;

    cout << age << endl;
    cout << &age << endl;
    cout << pAge << endl;
    cout << *pAge << endl;
    cout << &*pAge << endl;
    cout << *&*pAge << endl;
    cout << endl;

    cout << x << endl;
    cout << &x << endl;
    cout << pX << endl;
    cout << *pX << endl;
    cout << &*pX << endl;
    cout << *&*pX << endl;
    cout << endl;

    cout << name << endl;
    cout << &name << endl;
    cout << pName << endl;
    cout << *pName << endl;
    cout << &*pName << endl;
    cout << *&*pName << endl;
    cout << endl;
}
