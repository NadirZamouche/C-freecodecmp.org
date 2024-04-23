#include <iostream>

using namespace std;

void PrintHelloWorld(){
    cout << "Hello World" << endl;
}

int *Add(int* a, int* b){
    int* c = (int*)malloc(sizeof(int));//c = new int;
    *c = (*a) + (*b);// (*c) = (*a) + (*b);
    return c;
    free(c);// delete c;
}

int main()
{
    int a = 2, b = 4;
    int* ptr = Add(&a,&b);
    PrintHelloWorld();
    cout << "The sum = " << *ptr << endl;
    return 0;
}
