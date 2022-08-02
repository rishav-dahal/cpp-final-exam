#include<iostream>
#include<string.h>
using namespace  std;
class Test{
    int a;
    public:
     Test(){}
     Test(int a)
     {
        this->a=a;
     }
    Test operator ++(){
        Test b;
        b.a=++a;
        return b;
     }
     void display(){
        cout<<"the string is :"<<a<<endl;
     }
};
int main(){
    Test obj1(20),obj2;
    obj2=++obj1;
    obj2.display();
return 0;
}

