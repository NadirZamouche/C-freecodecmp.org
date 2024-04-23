#include <iostream>
using namespace std;

class Student {
public:
    string name;
    string major;
    double gpa;
    Student(string aName, string aMajor, double aGpa){
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    bool hasHonors(){
        if(gpa >= 3.5){
            return true;
        }
        return false;
    }
};

int main()
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;

    return 0;
}

/*
class Student {
public:
    string name;
    string major;
    double gpa;
    Student(string aName, string aMajor, double aGpa){
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    void hasHonors(){
        if(gpa >= 3.5){
            cout << name << " has honors." << endl;
        } else {
            cout << name << " does not have honors." << endl;
        }
    }
};

int main()
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    student1.hasHonors();
    student2.hasHonors();

    return 0;
}
*/
