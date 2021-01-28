//PROGRAM -- 25
//Data File Handling ... 09 ... Entering Details

#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>

class STUDENT
{
	private:
	 char grade;
	 int roll;
	 char name[30];
	 int std;
	 float mark;
	 void Calgrade()
	 {
		 if(mark>=90)
			 grade='A';
		 else if(mark>50 && mark<90)
			 grade='B';
		 else if(mark>0 && mark<=50)
			 grade='C';
		 else
			 grade='F';
	 }

	public:
	 void Enter()
	 {
		 cout<<"\n\t Enter Name : ";
		 gets(name);
		 cout<<"\n\t Enter Class : ";
		 cin>>std;
		 cout<<"\n\t Enter Roll Number : ";
		 cin>>roll;
		 cout<<"\n\t Enter Marks : ";
		 cin>>mark;
		 Calgrade();
	 }
	 void Display()
	 {
		 cout<<"\n\t Name : "<<name<<"\t Class : "<<std<<"\t Roll No. : "<<roll;
		 cout<<"\n\t Marks : "<<mark<<"\t Grade : "<<grade<<endl;
	 }
	 int getroll()
	 {
		 return roll;
	 }
}s;

void main()
{
	char opt;
	ofstream out;
	out.open("stu1.dat",ios::app | ios::binary);

	cout<<"\n\t----------------------------------------";
	cout<<"\n\t ... Enter The Details Of Student ...";
	cout<<"\n\t----------------------------------------";
	do
	{
		s.Enter();
		out.write((char*)&s,sizeof(s));
		cout<<"\n\t Do You Want To Continue Entering (Y/N) ? : ";
		cin>>opt;
		cout<<"\n\t---------------------------------------------------------";
	}while(opt=='y' || opt=='Y');

	out.close();

	ifstream in;
	in.open("stu1.dat",ios::in | ios::binary);

	cout<<"\n\t*******************************************";
	cout<<"\n\t ... Displaying Details Of Students ...";
	cout<<"\n\t*******************************************";
   in.seekg(0);
	while((!in.eof()) && (in.read((char*)&s,sizeof(s))))
	{
		s.Display();
	}

	in.close();
}
