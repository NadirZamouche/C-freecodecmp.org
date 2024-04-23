#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string color, pluralnoun, celebrity;

    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, pluralnoun);
    cout << "Enter a celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralnoun << " are blue " << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}
