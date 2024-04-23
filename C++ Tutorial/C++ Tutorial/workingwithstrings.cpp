#include <iostream>

using namespace std;

int main()
{
    cout << "academy elefant" << endl;
    cout << "hello" << endl;

    cout << "academy elefant ";
    cout << "hello" << endl;

    cout << "academy elefant\n";
    cout << "hello" << endl;

    string var ="academy elefant";
    cout << var << endl;

    cout << var.length() << endl;

    cout << var[8] << endl;
    var[8] = NULL;
    cout << var << endl;

    cout << var.find('e', 9) << endl;

    cout << var.substr(8,8) << endl;
    string varsub;
    varsub = var.substr(0,7);
    cout << varsub << endl;
    return 0;
}
