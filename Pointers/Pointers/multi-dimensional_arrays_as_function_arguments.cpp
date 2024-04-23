#include <iostream>
using namespace std;

void Func1D(int A[]) // int *A Don't forget to send the size
{
}

void Func2D(int B[][3]) // int (*B)[3] Don't forget to send the size
{
}

void Func3D(int C[][2][2]) // int (*C)[2][2] Don't forget to send the size
{
}

int main()
{
    int A[]={2,4,6,8,10};

    int B[2][3] = {
        {2, 3, 6},
        {4, 5, 8}
    };

    int C[3][2][2] = {
        {{2,5},{7, 9}},
        {{3,4},{6, 1}},
        {{0,8},{11, 13}}
    };

    cout << C << endl;

    };

    return 0;
}
