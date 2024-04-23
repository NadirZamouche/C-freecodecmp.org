#include <iostream>

using namespace std;

int main()
{
    /*int age;
    cout << " Enter your age: ";
    cin >> age;
    cout << "So, you are " << age << " years old. " << endl;


    /*string name;
    cout << "What is your name though? ";
    getline(cin, name);
    cout << "Thank you " << name;
    */

    string age,name;

    cout << "Enter your age: ";
    getline(cin, age);
    cout << "What is your name though? ";
    getline(cin, name);

    cout << "So, you are " << age << " years old. " << endl;
    cout << "Thank you " << name;

    return 0;
}
