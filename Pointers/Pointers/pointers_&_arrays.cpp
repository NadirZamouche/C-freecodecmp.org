#include <iostream>
using namespace std;

int main()
{
    int A[] ={2,8,9,7,4};
    /*
    cout << A << endl;
    cout << &A[0] << endl;
    cout << *A << endl;
    cout << A[0] << endl;
    for(int i = 0; i<5; i++)
    {
        cout << &A[i] << endl;
        cout << A+i << endl;
        cout << A[i] << endl;
        cout << *(A+i) << endl;
    }
    */
    int *p = A;
    p+=3;
    cout << *p << endl;
    return 0;
}
