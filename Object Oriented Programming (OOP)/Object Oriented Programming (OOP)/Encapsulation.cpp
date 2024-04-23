#include <iostream>
using namespace std;

class Employee {

    private:
        string name;
        string company;
        int age;

    public:
        Employee(string name, string company, int age){
            setname(name);
            setcompany(company);
            setage(age);
        }

        void setname(string name){
            this -> name = name;
        }
        string getname(){
            return name;
        }

        void setcompany(string company){
            this -> company = company;
        }
        string getcompany(){
            return company;
        }

        void setage(int age){
            this -> age = age;
        }
        int getage(){
            return age;
        }

        void introduction(){
            cout << "Name - " << name << endl;
            cout << "Company - "  << company << endl;
            cout << "Age - "  << age << endl;
        }
};

int main()
{
    Employee employee1("Nadir", "Chelsea",15);
    employee1.introduction();
}
