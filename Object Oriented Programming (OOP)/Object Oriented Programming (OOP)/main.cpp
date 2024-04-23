#include <iostream>
using namespace std;

class AbstractEmployee {
    virtual void askforpromotion()=0;
};

class Employee:AbstractEmployee {
    protected:
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
        void work(){
            cout << name << " is doing something at least." << endl;
        }
};

class Developer: public Employee {
        string fav_language;
    public:
        Developer(string name, string company, int age, string fav_language)
        :Employee(name, company,age){
            this -> fav_language = fav_language;
        }
        void introduction2(){
            cout << "Name - " << name << endl;
            cout << "Company - "  << company << endl;
            cout << "Age - "  <<  age << endl;
            cout << "Programming language - "  << fav_language << endl;
        }
        void work(){
            cout << name << " is coding using " << fav_language << endl;
        }
};

class Teacher: public Employee {
    string subject;
    public:
        Teacher(string name, string company, int age, string subject)
        :Employee(name, company,age){
            this -> subject = subject;
        }
        void introduction3(){
            cout << "Name - " << name << endl;
            cout << "Company - "  << company << endl;
            cout << "Age - "  <<  age << endl;
            cout << "Subject - "  << subject << endl;
        }
        void work(){
            cout << name << " is teaching " << subject << endl;
        }
};


int main()
{
    Developer d("Phill", "Microsoft", 40, "C++");
    Teacher t("Nadir", "Chelsea",20, "maths");

    d.work();
    t.work();
}
