#include <iostream>

using namespace std;

void hi(string name, int age)
{
    cout << "Hello " << name << " you are " << age << " years old." << endl;
}

int main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;

    hi(name,age);
    hi("kai",23);
    hi("mo salah",30);
    hi("mahrez",32);
    hi("werner",25);
    return 0;
}

/*void hi(string name, int age);

int main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;

    hi(name,age);
    hi("kai",23);
    hi("mo salah",30);
    hi("mahrez",32);
    hi("werner",25);
    return 0;
}

void hi(string name, int age)
{
    cout << "Hello " << name << " you are " << age << " years old." << endl;
}
*/
