//PROGRAM -- 30
//Data File Handling ... 14 ... Sorting

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
}s,stud;

void main()
{
	int rno;
	char last='y';
	ifstream in;
	ofstream out;
	in.open("stu1.dat",ios::in | ios::binary);
	out.open("temp.dat",ios::out | ios::binary);

	cout<<"\n\t ========== Enter Details Of Students To Be Added ==========";
	stud.Enter();
	in.seekg(0);
	while(!in.eof())
	{
		if(in.eof())
			break;
		in.read((char*)&s,sizeof(s));
		if(stud.getroll()<=s.getroll())
		{
			out.write((char*)&stud,sizeof(stud));
			last='n';
			break;
		}
		else
		{
			out.write((char*)&s,sizeof(s));
		}
	}
	if(last=='y')
		out.write((char*)&stud,sizeof(stud));
	else if(!in.eof())
	{
		while(!in.eof())
		{
			out.write((char*)&s,sizeof(s));
			if(in.eof())
				break;
			in.read((char*)&s,sizeof(s));
		}
	}

	in.close();
	out.close();

	remove("stu1.dat");
	rename("temp.dat","stu1.dat");

	in.open("stu1.dat",ios::in | ios::binary);

	cout<<"\n\t ----- Now The File Contains -----";
	in.seekg(0);
	while(!in.eof())
	{
		in.read((char*)&s,sizeof(s));
		if(in.eof())
			break;
		s.Display();
	}

	in.close();
}

