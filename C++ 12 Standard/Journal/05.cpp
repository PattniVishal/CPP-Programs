// PROGRAM -- 5
// Searching record in a binary file.

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
	int rno,flag=0;

	ifstream in;
	in.open("stud_1.dat",ios::in | ios::binary);

	cout<<"\n\t Enter The Roll Number To Search : ";
	cin>>rno;

	in.seekg(0);
	while((!in.eof()) && (in.read((char*)&s,sizeof(s))))
	{
		if(s.getroll()==rno)
		{
			flag=1;
			cout<<"\n\t ... Details Of Roll Number "<<rno<<" ...";
			cout<<"\n\t----------------------------------------------------";
			s.Display();
			cout<<"\t----------------------------------------------------";
			break;
		}
	}
	if(!flag)
		cout<<"\n\t Roll Number "<<rno<<" Does Not Exist In File !!";

	in.close();
}

