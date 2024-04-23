#include <iostream>
using namespace std;

void print(char* C)
{
    while(*C != '\0')
    {
        cout << *C;
        C++;
    }
    cout << endl;
}

int main()
{
    /*
    1)How to store strings:
    char C[4];
    C[0] = 'K';
    C[1] = 'A';
    C[2] = 'I';
    C[3] = '\0';
    char C[4]="KAI";
    char C[4]={'K','A','I','\0'};
    cout << C << endl;

    2)Arrays and pointers are different types that are used in a similar manner:
    char c1[6] = "Hello";
    char* c2;
    c2 = c1;
    cout << c2[1] << endl;
    c2[0] = 'A';
    cout << c2 << endl;

    3)Arrays are always passed to functions by reference like said before in "arrays as function arguments":
    */

    char C[20] = "Hello";
    print(C);
    return 0;
}
