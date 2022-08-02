#include<iostream>
#include<string.h>
using namespace  std;
class Test{
    char str[30];
    public:
    Test(){}
    Test(char name[])
    {
        strcpy(str,name);
    }
    void operator ==(Test obj)
    {
       
        if(strcmp(obj.str,str)==0)
        {
            cout<<"String are similar";
        }
        else
        {
            cout<<"Strings don't match";
        }
    }
    void display()
    {
       cout<<"the string is :"<<str<<endl;
    }
};
int main()
{
    char st1[20],st2[20];
    cout<<"Enter two string to compare"<<endl;
    cin>>st1>>st2;
    Test obj1(st1),obj2(st2);
    obj1.display();
    obj2.display();
    obj1==obj2;
    return 0;
}

