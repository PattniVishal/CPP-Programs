/*     _ +-------------------------------------------+ _
		/o)|                  Pattni                   |(o\
	  / / |                  Vishal                   | \ \
	 ( (_ |  _                 J.                  _  | _) )
	((\ \)+-/o)-----------------------------------(o\-+(/ /))
	(\\\ \_/ /                                     \ \_/ ///)
	 \      /                                       \      /
	  \____/                                         \____/            */
// S U M M E R  A S S I G N M E N T  -- 1
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

/* Define a class TEACHER with the following specifications :
  private members :
	 name             20 characters
	 subject          10 characters
	 Basic,DA,HRA     float
	 salary           float
	 Calculate() function computes salary and returns it.
	 Salary is sum of Basic, HRA, DA.
  public members :
	 Readdata() function accepts the data value and invoke Calculate().
	 Displaydata() function prints the data on the screen.        */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class TEACHER
	  {
		private:
		 char name[20];
		 char subject[10];
		 float basic,hra,da;
		 float salary;
		  float Calculate()
			{
			 salary=basic+hra+da;
			 return salary;
			}
		public:
		  void Readdata()
			{
			 cout<<"\n\t Enter Your Name : ";
			 gets(name);
			 cout<<"\n\t Enter The Subject Taught By You : ";
			 gets(subject);
			 cout<<"\n\t Enter Your Basic Salary : ";
			 cin>>basic;
			 cout<<"\n\t Enter Your DA (Dearness Allowance) : ";
			 cin>>da;
			 cout<<"\n\t Enter Your HRA (House Rent Allowance) : ";
			 cin>>hra;
			 clrscr();
			}
		  void Displaydata()
			{
			 float x;
			 cout<<"\n\n\t ----- Please Check The Below Entered Details -----";
			 cout<<"\n\t\t Name : "<<name;
			 cout<<"\n\t\t Subject : "<<subject;
			 cout<<"\n\t\t Basic Salary : "<<basic;
			 cout<<"\n\t\t DA (Dearness Allowance) : "<<da;
			 cout<<"\n\t\t HRA (House Rent Allowance) : "<<hra;
			 x=Calculate();
			 cout<<"\n\t\t Total Salary : "<<x<<" Rs./-";
			 cout<<"\n\t --------------------------------------------------";
			 cout<<"\n\n\t     ******      T-H-A-N-K  Y-O-U      ******";
			}
	  }t;
	  void main()
		 {
			char cont;
			cout<<"\n\t\t ----------------------------------------------------";
			cout<<"\n\t\t |     ~~~~~        W-E-L-C-O-M-E        ~~~~~      |";
			cout<<"\n\t\t |         SHRI SWAMINARAYAN H.V. VIDYALAYA         |";
			cout<<"\n\t\t |           ''Teacher's Salary Register''          |";
			cout<<"\n\t\t ----------------------------------------------------";
		 do
		  {
			t.Readdata();
			t.Displaydata();
			cout<<"\n\n\t\t Do You Want To Continue (Y/N) ? : ";
			cin>>cont;
		  }while(cont=='y' || cont=='Y');
		 }


