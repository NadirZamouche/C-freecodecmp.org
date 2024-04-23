#include <iostream>
using namespace std;

class Chef {
    public:
        void makeChiken(){
            cout << "The chef makes chiken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialdish(){
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef : public Chef {
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialdish(){
            cout << "The chef makes chiken parm" << endl;
        }
};


int main()
{
    Chef chef;
    chef.makeSpecialdish();

    ItalianChef italianchef;
    italianchef.makeSpecialdish();

    return 0;
}
