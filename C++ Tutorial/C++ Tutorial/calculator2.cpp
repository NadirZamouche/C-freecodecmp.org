#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    double a, b, s;
    char op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    if(op == '+'){
        s = a + b;
        cout << "The result is: "<< s << endl;
    }else if(op == '-'){
        s = a - b;
        cout << "The result is: "<< s << endl;
    }else if(op == '*'){
        s = a * b;
        cout << "The result is: "<< s << endl;
    }else if(op == '/'){
        s = a / b;
        cout << "The result is: "<< s << endl;
    }else if(op == '%'){
        s = a - floor(a/b)*b;
        cout << "The result is: "<< s << endl;
    }else {
        cout << "Invalid operator ";
    }

    return 0;
}
