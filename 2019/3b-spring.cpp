//make 2 classes base and derived input from base and calculate in derive and display in base using friend function

#include<iostream>

using namespace std;
class Derived;
class Base
{    
    public:
    int i,j;
    void input()
    {
        cout<<"Enter vector cordinates i and j"<<endl;
        cin>>i>>j;
    }
    friend void display(Derived);

};

class Derived: public Base
{
    
    public:
    int result1,result2;
    void add_vector(Base a,Base b)
    {
        result1=a.i+b.i;
        result2=a.j+b.j;
    }

};

int main()
{
    Base a,b;
    Derived d;
    a.input();
    b.input();
    d.add_vector(a,b);
    display(d);
    return 0;


}

void display(Derived d)
{
    cout<<"THe sum of two vector "<<d.result1 <<"i+"<<d.result2<<"j"<<endl;
}