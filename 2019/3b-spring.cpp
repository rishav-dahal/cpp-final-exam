//make 2 classes base and derived input from base and calculate in derive and display in base using friend function

#include<iostream>

using namespace std;

class base
{
    protected:
    int i,j;
    public:
    void input()
    {
        cout<<"Enter vector cordinates i and j"<<endl;
        cin>>i>>j;
    }
    void friend display()
    {
        cout<<"THe sum of two vector "<<i <<" + "<<j
    }

};

class derived: public base
{
    int sum;
    public:
    int add_vector()
    {
        sum=i+j;
        return sum;
        
    }
    void display();
}