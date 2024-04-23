#include <iostream>
using namespace std;

int main()
{
    // 3D array:
    int C[3][2][2] = {
        {{2,5},{7, 9}},
        {{3,4},{6, 1}},
        {{0,8},{11, 13}}
    };

    int (*p)[2][2] = C;

    cout << C << endl;
    cout << &C[0] << endl;
    cout << &C[0][0] << endl;
    cout << &C[0][0][0] << endl;

    cout << *C << endl;
    cout << C[0] << endl;
    cout << &C[0][0] << endl;
    cout << &C[0][0][0] << endl;

    cout << *(C[0][1]+1) << endl;
    cout << *(&C[0][1][0]+1) << endl;
    cout << *(&C[0][1][1]) << endl;
    cout << C[0][1][1] << endl;

    cout << *(C[1]+1) << endl;
    cout << *(&C[1][0]+1) << endl;
    cout << *(&C[1][1]) << endl;
    cout << C[1][1] << endl;
    cout << &C[1][1][0] << endl;

    cout << *(C[0][0]+1) << endl;
    cout << *(&C[0][0][0]+1) << endl;
    cout << *(&C[0][0][1]) << endl;
    cout << C[0][0][1] << endl;

    /* 1D array:
    int A[]={2,4,6,8,10};
    int *p = A;

    cout << A << endl;
    cout << p << endl;

    cout << *A << endl;
    cout << *p << endl;
    cout << *(p+2) << endl;
    cout << A[2] << endl;

    cout << *(A+3) << endl;
    cout << A[3] << endl;

    cout << A+3 << endl;
    cout << &A[3] << endl;
    */

    /* 2D array:
    int B[2][3] = {
        {2, 3, 6},
        {4, 5, 8}
    };

    int (*p)[3] = B;

    cout << B << endl;
    cout << &B[0] << endl;
    cout << &B[0][0] << endl;

    cout << *B << endl;
    cout << B[0] << endl;
    cout << &B[0][0] << endl;

    cout << B+1 << endl;
    cout << &B[0]+1 << endl;
    cout << &B[1] << endl;
    cout << &B[1][0] << endl;

    cout << *(B+1) << endl;
    cout << *(&B[0]+1) << endl;
    cout << *&B[1] << endl;
    cout << B[1] << endl;
    cout << &B[1][0] << endl;

    cout << *(B+1)+2 << endl;
    cout << *(&B[0]+1)+2 << endl;
    cout << *&B[1]+2 << endl;
    cout << B[1]+2 << endl;
    cout << &B[1][0]+2 << endl;
    cout << &B[1][2] << endl;

    cout << *(*B+1) << endl;
    cout << *(*&B[0]+1) << endl;
    cout << *(B[0]+1) << endl;
    cout << *(&B[0][0]+1) << endl;
    cout << *(&B[0][1]) << endl;
    cout << B[0][1] << endl;
    */

    return 0;
}
