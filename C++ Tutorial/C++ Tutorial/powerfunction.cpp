#include <iostream>

using namespace std;

double power(double a, double n){
    double s = 1;
    if (n > 0) {
        for (int i; i < n; i++){
        s = s * a; //s *=a;
    }
    } else if (n < 0) {
        for (int i; i < -(n); i++){
        s = s * ( 1 / a); //s *=(1/a); //s /=a;
    }
    }
    return s;
}

int main()
{
    cout << power(2, 0);
}
