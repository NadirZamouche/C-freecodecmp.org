#include <iostream>

using namespace std;

// part 3: dynamic memory allocation in C++:

int main()
{
    int a;
    int *p;

    p = new int;
    *p =10;
    cout << *p << endl;
    delete p;

    p = new int;
    *p =20;
    cout << *p << endl;
    delete p;

    p = new int[20];
    p[0] = 5;
    cout << *p << endl;
    delete[] p;

    return 0;
}

/* part 1: stack memory explanation
int total;

int square(int x){
    return x*x;
}

int squareOfSum(int x, int y){
    int z = pow(x+y, 2);
    return z;
}

int main()
{
    int a = 4, b = 8;
    total = squareOfSum(a,b);
    cout << total;
    return 0;
}
*/

/* part 2: dynamic memory allocation in C:

int main()
{
    int a;
    int *p;

    p = (int*)malloc(sizeof(int));
    *p =10;
    cout << *p << endl;
    free(p);

    p = (int*)malloc(sizeof(int));
    *p =20;
    cout << *p << endl;
    free(p);

    p = (int*)malloc(20*sizeof(int));
    p[0] = 5;
    cout << *p << endl;
    free(p);

    return 0;
}
*/

