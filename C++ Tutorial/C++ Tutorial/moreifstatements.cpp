#include <iostream>

using namespace std;

double getmax(double x1, double x2, double x3){
    double s;

    if (x1 >= x2 && x1 >= x3){
        s = x1;
    } else if (x2 >= x1 && x2 >= x3){
        s = x2;
    } else {
        s = x3;
    }

    return s;
}

int main()
{
    cout << getmax(7, 8, 8);

    return 0;
}
