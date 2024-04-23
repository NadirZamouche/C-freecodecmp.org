#include <iostream>
using namespace std;

int SumOfElements(int A[], int size) // int *A
{
    int sum;
    for(int i = 0; i<size; i++)
    {
        sum += A[i];
    }
    return sum;
}

int main()
{
    int A[]={1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    cout << "the sum of elements is :" << SumOfElements(A, size) << endl;
    return 0;
}
/*
void Double(int A[], int size)
{
    for(int i = 0; i<size; i++)
    {
        A[i]= 2*A[i]; //or A[i] *=2;
    }
}

int main()
{
    int A[]={1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    Double(A,size);
    for(int i = 0; i<size; i++)
    {
        cout << A[i]<<" ";
    }
    return 0;
}
*/
