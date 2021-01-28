/*     _ +-------------------------------------------+ _
		/o)|                  Pattni                   |(o\
	  / / |                  Vishal                   | \ \
	 ( (_ |  _                 J.                  _  | _) )
	((\ \)+-/o)-----------------------------------(o\-+(/ /))
	(\\\ \_/ /                                     \ \_/ ///)
	 \      /                                       \      /
	  \____/                                         \____/            */
// S U M M E R  A S S I G N M E N T  -- 4
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

/* Define a class name HOUSING in C++ with the following descriptions:
  => Private Members:
	- REG_NO          integer(Ranges 10-1000)
	- NAME            array of characters( String )
	- TYPE            character
	- COST            float
  => Public Members:
	- Function Read_Data() to read an object of HOUSING type
	- Function Display() to display the Details of an object
	- Function Draw_Nos() to choose and display the details of 2
	 houses selected randomly from an array of 10 objects of type HOUSING.
	 Use random function to generate the registration nos. to match with
	 REG_NO from array.                 */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

class HOUSING
	 {
		private:
		  int REG_NO;
		  char NAME[20];
		  char TYPE[20];
		  float COST;
		public:
		  void Read_Data()
			 {
				cout<<"\n\n\n\t ----------------------------------------";
				cout<<"\n\t Enter Registration Number (1-5) : ";
				cin>>REG_NO;
				cout<<"\n\t Enter Your Name : ";
				gets(NAME);
				cout<<"\n\t Enter Type Of House (Row House / Flate) : ";
				gets(TYPE);
				cout<<"\n\t Enter The Cost Of House : ";
				cin>>COST;
				cout<<"\n\t ----------------------------------------";
			  clrscr();
			 }
		  void Display()
			 {
				cout<<"\n\t ----------------------------------------";
				cout<<"\n\t       ------  Lucky Winner  ------";
				cout<<"\n\n\t Registration Number : "<<REG_NO;
				cout<<"\n\t Name : "<<NAME;
				cout<<"\n\t Type Of House : "<<TYPE;
				cout<<"\n\t Cost Of House : "<<COST<<" Rs.";
				cout<<"\n\t ----------------------------------------";
			 }
		  void Draw_Nos()
			 {
			  clrscr();
				int a,b;
				randomize();
				a=random(5)+1;
				b=random(5)+1;
				cout<<"\n\t ----------------------------------------";
				cout<<"\n\t Generating Lucky Draw ....";
				cout<<"\n\n\t Two Lucky Numbers Are ..";
				cout<<"\n\n\t Reg. Number : "<<a;
				cout<<"\n\t       and";
				cout<<"\n\t Reg. Number : "<<b;
				cout<<"\n\t ----------------------------------------";
				 if(REG_NO==a || REG_NO==b)
					{
					  cout<<"\n\n\n\t Congratulations !!";
					  cout<<"\n\t You Are A Lucky Draw Winner ....";
					  Display();
                 cout<<"\n\n\t\t T H A N K   Y O U";
					}
				 else
					{
					  cout<<"\n\t ----------------------------------------";
					  cout<<"\n\n\t Not Lucky Today...";
					  cout<<"\n\t Try Another Day...";
					  cout<<"\n\t ----------------------------------------";
					}
			 }
	 }h;

void main()
  {
	 clrscr();
			  cout<<"\n\t\t  _=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_";
			  cout<<"\n\t\t ||          *                  *               ||";
			  cout<<"\n\t\t ||   *             W E L C O M E   *      *    ||";
			  cout<<"\n\t\t ||      *       THE SAPPHIRE CO-OP.    *       ||";
			  cout<<"\n\t\t ||     *      *  HOUSING SOCIETY             * ||";
			  cout<<"\n\t\t ||________________              _______________||"<<endl;
			  cout<<"\n\n\t\t  ------   P  R  E  S  E  N  T  S   ------";
			  cout<<"\n\t\t $ $ $ $   Lucky Draw Contest   $ $ $ $";
			  cout<<"\n\n\t\t ~~ Only Two Houses Left For Sale.";
			  cout<<"\n\n\t\t ~~ Upto 10% Discount On Remaining Houses.";
	 h.Read_Data();
	 h.Draw_Nos();
  }
