#include<iostream>
#include<string.h>
using namespace  std;
class Test{
    char str[30];
    public:
     Test(){}
     Test(char* name)
     {
         strcpy(str,name);
     }
    Test operator =(char){
        Test a;
        strcpy(a.str,str);
        return a;
     }
     void display(){
        cout<<"the string is :"<<str<<endl;
     }
};
int main(){
    Test obj1("apple"),obj2;
    obj2=obj1;
    obj2.display();
return 0;
}

