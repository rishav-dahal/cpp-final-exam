//overloading * operator
#include<iostream>

using namespace std;

class Multi
{
    int a;
    public:
    Multi(){}
    Multi(int a)
    {
        this->a=a;
    }
    int display()
    {
        return a;
    }
    Multi operator *(Multi);

};

int main()
{
    Multi m1(4), m2(5) ,m3;
    m3=m1*m2;
    cout<<"The product of "<<m1.display()<<"and"<<m2.display()<<" is "<<m3.display()<<endl;
    return 0;
}

Multi Multi :: operator *(Multi m2)
{
    Multi m;
    m.a=this->a*m2.a;
    return m;
}
