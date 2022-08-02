#include<iostream>
using namespace std;
class Hello
{
    float amt,time,rate;
    public:
    Hello(){}
    Hello(float amt,float time,float rate=8)
    {
        this->amt=amt;
        this->time=time;
        this->rate=rate;
    }
    void display()
    {
        cout<<"simple intrest is"<<(amt*time*rate)/100<<endl;
    }
};

int main()
{
    Hello h(2000,3.1);
    h.display();
    return 0;

}