//PROGRAM -- 29
//Data File Handling ... 13 ... Menu Driven (All In One)

#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<conio.h>

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
}s,stud;

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

void Main_Enter()
{
	char opt;
	ofstream out;
	out.open("stud_new.dat",ios::app | ios::binary);

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
	in.open("stud_new.dat",ios::in | ios::binary);

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

void Main_Search()
{
	int rno,flag=0;

	ifstream in;
	in.open("stud_new.dat",ios::in | ios::binary);

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

void Main_Delete()
{
	int rno,flag=0;char ans;

	cout<<"\n\t Enter The Roll Number To Be Deleted : ";
	cin>>rno;

	fstream in,out;
	in.open("stud_new.dat",ios::in | ios::binary);
	out.open("temp_new.dat",ios::out | ios::binary);

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

	remove("stud_new.dat");
	rename("temp_new.dat","stud_new.dat");

	in.open("stud_new.dat",ios::in | ios::binary);

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

void Main_Modify()
{
	long double pos;
	int rno;
	int flag=0;

	cout<<"\n\t Enter The Roll Number To Be Modified : ";
	cin>>rno;

	fstream f;
	f.open("stud_new.dat",ios::in | ios::out | ios::binary);

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

void main()
{
	int ch;
	char con;
	again:
	clrscr();
	cout<<"\n\n\t\t =============================================";
	cout<<"\n\t\t ||             W E L C O M E               ||";
	cout<<"\n\t\t ||       D.F.H Menu Diven Program          ||";
	cout<<"\n\t\t =============================================";
	cout<<"\n\n\t ========================  D F H  Menu  ========================";
	cout<<"\n\n\t\t 1. Enter Record.";
	cout<<"\n\t\t 2. Search Record.";
	cout<<"\n\t\t 3. Delete Record.";
	cout<<"\n\t\t 4. Modify Record.";
	cout<<"\n\t\t 5. Exit Program.";
	cout<<"\n\n\t Please Enter Your Choice (1 - 5) : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			clrscr();
			Main_Enter();
			cout<<"\n\n\t Press Enter To Continue ...";
			getch();
			break;
		case 2:
			clrscr();
			Main_Search();
			cout<<"\n\n\t Press Enter To Continue ...";
			getch();
			break;
		case 3:
			clrscr();
			Main_Delete();
			cout<<"\n\n\t Press Enter To Continue ...";
			getch();
			break;
		case 4:
			clrscr();
			Main_Modify();
			cout<<"\n\n\t Press Enter To Continue ...";
			getch();
			break;
		case 5:
			cout<<"\n\n\n\t\--------------------  EXITING  --------------------";
			exit(0);
		default:
			cout<<"\n\n\n\t Please Enter Valid Choice ....";
			goto again;
	}
	cout<<"\n\n\n\n\t Do You Want To Continue Using Program? (Y/N) : ";
	cin>>con;
	if(con=='Y' || con=='y')
		goto again;
	else
	{
		cout<<"\n\n\n\t\--------------------  EXITING  --------------------";
		exit(0);
	}
}
