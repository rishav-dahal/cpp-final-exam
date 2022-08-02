//Virtual Base Class with derived class constructor

#include <iostream>
#include <cstring>
using namespace std;

class University
{
	protected:
		char Uname[10];
		char Ulocation[10];
	public:
		University(){}
		University(char* Uname, char* Ulocation)
		{
			strcpy(this->Uname,Uname);
			strcpy(this->Ulocation,Ulocation);
		}
		void display()
		{
			cout<<"University Name: "<<Uname<<endl;
			cout<<"University Location: "<<Ulocation<<endl;
		}
};

class Affiliated:virtual public University
{
	protected:
		char Aname[10];
		char Aaddress[10];
		int Anumberofprograms;
	public:
		Affiliated(){}
		Affiliated(char* Aname, char* Aaddress, int Anumberofprograms,char* Uname, char* Ulocation):University(Uname,Ulocation)
		{
			strcpy(this->Aname,Aname);
			strcpy(this->Aaddress,Aaddress);
			this->Anumberofprograms=Anumberofprograms;
		}
		void display()
		{
			cout<<"Name of Affiliated College: "<<Aname<<endl;
			cout<<"Address of the College: "<<Aaddress<<endl;
			cout<<"Number of programs: "<<Anumberofprograms<<endl;
		}
};

class Constituent:virtual public University
{
	protected:
		char sclDean[10];
		char nameofprograms[10];
	public:
		Constituent(){}
		Constituent(char* sclDean, char* nameofprograms,char* Uname, char* Ulocation):University(Uname,Ulocation)
		{
			strcpy(this->sclDean,sclDean);
			strcpy(this->nameofprograms,nameofprograms);
		}
		void display()
		{
			cout<<"School Dean: "<<sclDean<<endl;
			cout<<"Name of programs: "<<nameofprograms<<endl;
		}
};

class Student:public Affiliated,public Constituent
{
	protected:
		char Sname[10];
		char Sprogram[10];
		int enrolledYear;
	public:
		Student(){}
		Student(char* Sname, char* Sprogram, int enrolledYear,char* Aname, char* Aaddress, int Anumberofprograms, char* sclDean, char* nameofprograms,char* Uname, char* Ulocation):Affiliated(Aname,Aaddress,Anumberofprograms,Uname,Ulocation),Constituent(sclDean,nameofprograms,Uname,Ulocation),University(Uname,Ulocation)
		{
			strcpy(this->Sname,Sname);
			strcpy(this->Sprogram,Sprogram);
			this->enrolledYear= enrolledYear;
		}
		void display()
		{
            University::display();
            Affiliated::display();
            Constituent::display();
			cout<<"Student's Name: "<<Sname<<endl;
			cout<<"Name of Program: "<<Sprogram<<endl;
			cout<<"Enrolled Year: "<<enrolledYear<<endl;
		}
};

int main()
{
	Student s1;
	Student s2("Rishav","Software",2021,"NCIT","balkumari",5,"ram","bachelor","pokhara","lekhnath");
	s2.display();
	return 0;
}