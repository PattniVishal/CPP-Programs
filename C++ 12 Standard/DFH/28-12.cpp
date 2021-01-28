//PROGRAM -- 28
//Data File Handling ... 12 ... Modify

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
	 void Modify();
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

	 void STUDENT::Modify()
	 {
	 float mks;
	 char nn[30];
	 int st;
		 cout<<"\n\n\t **************************************************";
		 cout<<"\n\t ========>>>   Enter New Details";

		 cout<<"\n\t Enter New Name ('.' To Retain Old Data) : ";
		 gets(nn);
		 if(strcmp(nn,".")!=0)
			 strcpy(name,nn);

		 cout<<"\n\t Enter New Class ('0' To Retain Old Data) : ";
		 cin>>st;
		 if(st!=0)
			 std=st;

		 cout<<"\n\t Enter New Marks ('-1' To Retain Old Data) : ";
		 cin>>mks;
		 if(mks!=-1)
		 {
			 mark=mks;
			 Calgrade();
		 }
		 cout<<"\n\t **************************************************";
	 }

void main()
{
	long double pos;
	int rno;
	int flag=0;

	cout<<"\n\t Enter The Roll Number To Be Modified : ";
	cin>>rno;

	fstream f;
	f.open("stu1.dat",ios::in | ios::out | ios::binary);

	while((!f.eof()) && (f.read((char*)&s,sizeof(s))))
	{
		if(s.getroll()==rno)
		{
			pos=f.tellg();
			flag=1;
			cout<<"\n\t --------------------------------------------------";
			cout<<"\n\t ... Currently Roll Number "<<rno<<" Contains ...";
			s.Display();
			s.Modify();
			f.seekp(pos-39);                   // (pos-39) bcoz 40 is size of class
			f.write((char*)&s,sizeof(s));
			break;
		}
	}
	if(!flag)
	{
		cout<<"\n\t ERROR .. Record Not Found !";
		exit(0);
	}

	cout<<"\n ===============================================================";
	cout<<"\n\t After Modifying, Your File Is ....";
	f.seekg(0);
	while((!f.eof()) && (f.read((char*)&s,sizeof(s))))
	{
		if(f.eof())
			break;
		s.Display();
	}
	cout<<"\n ===============================================================";
	f.close();
}


