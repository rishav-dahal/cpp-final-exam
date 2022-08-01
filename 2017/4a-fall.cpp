#include<iostream>

using namespace std;

class Base
{
    protected:
    int h,m,s;
    public:
    Base()
    {
        this->h=0;
        this->m=0;
        this->s=0;
    }
    Base(int h,int m,int s)
    {
        this->h=h;
        this->m=m;
        this->s=s;
        cout<<"The time  is"<<h<<":"<<m<<":"<<s<<endl;
    }
    
};

class Derived: public Base
{
    int h1,m1,s1;
    public:
    Derived()
    {
        this->h1=0;
        this->m1=0;
        this->s1=0;
    }
    Derived(int h1,int m1,int s1)
    {
        this->h1=h1;
        this->m1=m1;
        this->s1=s1;
        cout<<"The time  is"<<h1<<":"<<m1<<":"<<s1<<endl;
    }
    void adds();
    friend class Third;
};

class Third
{
    protected:
    int h2,m2,s2;
    public:
    Third()
    {
        this->h2=0;
        this->m2=0;
        this->s2=0;
    }
    Third(int h2,int m2,int s2)
    {
        this->h2=h2;
        this->m2=m2;
        this->s2=s2;
        cout<<"The time  is"<<h2<<":"<<m2<<":"<<s2<<endl;
    }
    void diff(Derived);
};

int main()
{
    int h,m,s;
    cout<<"Enter hr min and second for base class"<<endl;
    cin>>h>>m>>s;
    Base b(h,m,s);
    cout<<"Enter hr min and second for derive class"<<endl;
    cin>>h>>m>>s;
    Derived d(h,m,s);
    cout<<"Enter hr min and second for third class"<<endl;
    cin>>h>>m>>s;
    Third t(h,m,s);
    d.adds();
    t.diff(d);
    return 0;
}

void Derived::adds()
{
    int hr,min,sec;
    sec=s+s1;
    cout<<sec;
    min=sec/60;
    sec=sec%60;

    min+=m+m1;
    hr=min/60;
    min=min%60;

    hr+=h+h1;

    cout<<"The time after addition is "<<hr<<":"<<min<<":"<<sec<<endl;
}

void Third:: diff(Derived d)
{
    int hr,min,sec;
    if(d.s<s2)
    {
        d.m--;
        d.s+=60;
    }
    sec=d.s-s2;
    if(d.m<m2)
    {
        d.h--;
        d.m+=60;
    }
    min=d.m-m2;

    hr=d.h-h2;
    if(hr<0)
    {
        hr*-1;

    }
     cout<<"The time after difference is "<<hr<<":"<<min<<":"<<sec<<endl;
}