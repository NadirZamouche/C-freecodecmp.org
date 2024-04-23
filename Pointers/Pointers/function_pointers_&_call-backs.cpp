#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;


//Scenario4: qsort generic function
int compare(const void* a,const void* b)
{
    int A= *((int*)a);//typecasting to int* and getting value (dereferencing)
    int B= *((int*)b);
    return abs(A)-abs(B);
}

int main()
{
    int i, A[]={-31,22,-1,50,-6,4};
    qsort(A,6,sizeof(int), compare);
    for(i = 0; i<6; i++){
            cout << A[i] << " ";
            }
    return 0;
}

/*Scenario1: basic call-back cfunction concept
void A()
{
    cout << "Hello\n";
}

void B(void(*ptr)()) //function pointer as argument
{
    ptr(); //call-back function that "ptr" points to
}

int main()
{
    B(A);
    //cout << c << endl;
    return 0;
}
*/

/*Scenario2: two sorting scenarios increasingly or decreasingly
int compare(int a, int b)
{
    if(a > b) return 1;
    else return -1;
}

void BubbleSort(int *A, int n, int (*compare)(int,int)) // or int[] A
{
    int i,j,temp;
    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++){
            if(compare(A[j],A[j+1]) > 0) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int i, A[]={3,2,1,5,6,4};
    BubbleSort(A,6, compare);
    for(i = 0; i<6; i++){
            cout << A[i] << " ";
            }
    return 0;
}
*/

/*Scenario3: sorting absolute numbers scenario
int compare(int a, int b)
{
    if(a > b) return 1;
    else return -1;
}

int absolute_compare(int a, int b)
{
    if(abs(a) > abs(b))return 1;
    else return -1;
}

void BubbleSort(int *A, int n, int (*compare)(int,int))
{
    int i,j,temp;
    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++){
            if(compare(A[j],A[j+1]) > 0) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int i, A[]={-31,22,-1,50,-6,4};
    BubbleSort(A,6, absolute_compare);
    for(i = 0; i<6; i++){
            cout << A[i] << " ";
            }
    return 0;
}
*/
