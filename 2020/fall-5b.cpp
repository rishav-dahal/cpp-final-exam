//swap template 

#include<iostream>

using namespace std;

template<typename T>

void swap1(T &a , T &b)
{
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
    //for integer
    int a=1,b=2;
    cout<<"Before swap a= "<<a<<" and b = "<<b<<endl;
    swap1(a,b);
    cout<<"after swap a= "<<a<<" and b = "<<b<<endl;
    
    //for character
   
    
    //for float
    
    
    return 0;
}