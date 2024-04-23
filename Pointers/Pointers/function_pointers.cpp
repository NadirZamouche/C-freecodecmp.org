#include <iostream>
using namespace std;

void PrintHello()
{
    cout << "Hello\n";
}

void Hello(string name)
{
    cout << "Hello " << name << endl;
}

int Add(int a, int b){
    return a+b;
}

int main()
{
    int c;
    int (*p)(int,int);
    p = &Add; //or p = Add;
    c = (*p)(2,3);// or c = p(2,3) if i used p = Add;
    cout << c << endl;

    void (*ptr) ();
    ptr = PrintHello;
    ptr();

    void (*ptr2)(string);
    ptr2 = Hello;
    ptr2("Tom");
    return 0;
}
