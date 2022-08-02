#include <iostream>
#include <string.h>
using namespace std;
class Person
{
     protected:
        char name[20];
        int age;
    public:
        void getPerson()
        {
            cout<<"Enter Name:"<<endl;
            cin>>name;
            cout<<"Enter Age:"<<endl;
            cin>>age;
        }
        void displayPerson()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Age:"<<age<<endl;
        }
};
class Student:public Person
{
    private:
        int roll;
        char college[20];
    public:
        Student(){}
        Student(int roll,char college[20])
        {
            getPerson();
            this->roll=roll;
            strcpy(this->college,college);
        }
        void displayStudent()
        {
            displayPerson();
            cout<<"Roll:"<<roll<<endl;
            cout<<"College:"<<college<<endl;
        }
};
class Employee:public Person
{
    private:
        int salary;
        char post[20];
    public:
        Employee(){}
        Employee(int salary,char post[20])
        {
            getPerson();
            this->salary=salary;
            strcpy(this->post,post);
        }
        void displayEmployee()
        {
            displayPerson();
            cout<<"Salary:"<<salary<<endl;
            cout<<"Post:"<<post<<endl;
        }
};
int main()
{
    Student s(201639,"NCIT");
    Employee e(500000,"CEO");
    s.displayStudent();
    e.displayEmployee();
    return 0;
}
