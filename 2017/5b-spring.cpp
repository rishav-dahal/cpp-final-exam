#include<iostream>

using namespace std;

class Alpha
{
    int a;
    public:
    Alpha(){}
    Alpha(int a)
    {
        this->a=a;
    }
    void showa()
    {
        cout<<"The value of a is "<<a<<endl;
    }
};

class Beta
{
    int b;
    public:
    Beta(){}
    Beta(int b)
    {
        this->b=b;
    }
    void showb()
    {
        cout<<"The value of b is "<<b<<endl;
    }
};

class Gamma:public Alpha, public Beta
{
    int c;
    public:
    Gamma(){}
    Gamma(int a,int b, int c):Alpha(a),Beta(b)
    {
        this->c=c;
    }
    void showg()
    {
        showa();
        showb();
        cout<<"The value of c is "<<c<<endl;
    }
};

int main()
{
    Gamma a(23,4,3);
    a.showg();
    return 0;
}