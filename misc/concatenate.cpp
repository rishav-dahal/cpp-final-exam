#include<iostream>
#include<string.h>
using namespace std;

class String
{
    char a[20];
    public:
    String(){}
    String(char a[])
    {
        strcpy(this->a,a);
    }
    String operator +(String obj)
    {
        String s;
        strcpy(s.a,a);
        strcat(s.a,obj.a);
        return s;
    }
    void display()
    {
        cout<<"String is "<<a<<endl;
    }
};

int main()
{
    char st1[]="Rishav",st2[]=" Dahal";
    String s1(st1) ,s2(st2),s3;
    s1.display();
    s2.display();
    s3=s1+s2;
    s3.display();
    return 0;
}