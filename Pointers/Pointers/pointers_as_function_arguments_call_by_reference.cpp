#include <iostream>
using namespace std;

//Solution 2: passing address(using a pointer):
int Increment(int *p){
    *p = (*p)+1; //*p +=1; //*p++;
}

int main()
{
    int a = 10;
    Increment(&a);
    cout << "a = " << a << endl;
    return 0;
}

/* Problem: a still showing 10

int Increment(int a){
    a = a+1;
    cout << "&a in Increment function is = " << &a << endl;
    return a;
}

//Solution 1: passing value(creating another variable):
int Increment(int a){
    int b;
    b = a+1;
    return b;
}

int main()
{
    int a = 10;
    cout << "a = " << Increment(a) << endl;
    return 0;
}
