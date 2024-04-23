#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter size of array\n";
    cin >> n;
    int *A = (int*)malloc(n*sizeof(int));
    for(int i = 0; i<n; i++){
        A[i] = i+1;
    }
    //realoc:
    int *B = (int*)realloc(A,2*n*sizeof(int));
    cout << "previous block address" << A << endl;
    cout << "new block address" << B << endl;
    for(int i = 0; i<n; i++){
        cout << B[i] <<endl;
    }
    /*malloc:
    int *A = (int*)malloc(n*sizeof(int));
    for(int i = 0; i<n; i++){
        A[i] = i+1;
    }
    for(int i = 0; i<n; i++){
        cout << A[i] <<endl;
    }
    free(A);
    */

    /*calloc: (value initialization of 0)
    int *A = (int*)calloc(n,sizeof(int));
    for(int i = 0; i<n; i++){
        cout << A[i] <<endl;
    }
    free(A);
    */

    /*realloc:
    Int *A = (int*)realloc(A,0); = free(A);
    int *B = (int*)realloc(NULL,2*n*sizeof(int)); = int *B = (int*)malloc(2*n*sizeof(int));
    */

    return 0;
}
