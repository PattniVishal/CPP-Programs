//PROGRAM -- 27
//Data File Handling ... 11 ... Delete

#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<process.h>

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
	int rno,flag=0;char ans;

	cout<<"\n\t Enter The Roll Number To Be Deleted : ";
	cin>>rno;

	fstream in,out;
	in.open("stu1.dat",ios::in | ios::binary);
	out.open("temp.dat",ios::out | ios::binary);

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
			cout<<"\n\t Are You Sure You Want To Delete This Record (y/n) : ";
			cin>>ans;
			if(ans=='n' || ans=='N')
			{
				out.write((char*)&s,sizeof(s));
			}
		}
		else
		{
			out.write((char*)&s,sizeof(s));
		}
	}
	if(!flag)
	{
		cout<<"\n\t ERROR .. Record Not Found !";
		exit(0);
	}

	in.close();
	out.close();

	remove("stu1.dat");
	rename("temp.dat","stu1.dat");

	in.open("stu1.dat",ios::in | ios::binary);

	cout<<"\n\t ================================================";
	cout<<"\n\t ..... Now Your File Contains .....";
	in.seekg(0);
	while((!in.eof()) && (in.read((char*)&s,sizeof(s))))
	{
		if(in.eof())
			break;
		s.Display();
	}
  cout<<"\t ================================================";

	in.close();
}

