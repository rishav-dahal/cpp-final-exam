//swapping using friend function 

#include<iostream>

using namespace std;
class Two;
class One
{
    int x=3;
    public:;
    friend void swapp(One  &,Two &);
  
    void display()
    {
        cout<<"The value of x is "<<x<<endl;
    }
};

class Two
{
    int y=4;
    public:
    friend void swapp(One & ,Two &);
    void display()
    {
        cout<<"The value of y is "<<y<<endl;
    }
};

int main()
{
    One o;
    Two t;
    cout<<"Values before swap p"<<endl;
    o.display();
    t.display();
    swapp(o,t);
    cout<<"Values after swapp "<<endl;
    o.display();
    t.display();
    return 0;
}

void swapp(One &a,Two &b)
{
    int temp=a.x;
    a.x=b.y;
    b.y=temp;
}
