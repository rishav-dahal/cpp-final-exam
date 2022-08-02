#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
    int code,salary;
    char name[30],address[20];
    public:
    Employee()
    {
        this->code=0;
        strcpy(this->name,"");
        strcpy(this->address,"address");
        this->salary=0;
    }
    Employee(int code,char name[],char address[],int salary)
    {
        this->code=code;
        strcpy(this->name,name);
        strcpy(this->address,address);
        this->salary=salary;
    }
    Employee(Employee &obj)
    {
        obj.code=code;
        strcpy(obj.name,name);
        strcpy(obj.address,address);
        obj.salary=salary;
    }
    void display()
    {
        cout<<"code="<<code<<endl<<"Name="<<name<<endl<<"Address="<<address<<endl<<"Salary="<<salary<<endl;
    }
};

int main()
{
    Employee e1,e2(21,"rishav","bhadrapur",300000),e3;
    e3=e2;
    e2.display();
    e3.display();
    return 0;
}