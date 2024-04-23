#include <iostream>
using namespace std;

class AbstractEmployee {
    virtual void askforpromotion()=0;
};

class Employee:AbstractEmployee {
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
        void askforpromotion(){
            if (age>30){
                cout << "Congratulation " << name  << " you got promoted!" << endl;
            } else {
                cout << "sorry " << name  << " you're too young for a promotion :(" << endl;
            }
        };
};

int main()
{
    Employee employee1("Nadir", "Chelsea",20);
    employee1.askforpromotion();
}
