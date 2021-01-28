//PROGRAM - 2
/*Define a class RESORT in C++ with following details :
  => Private Members :-
		room -- data member to store room no.
		name -- data member to store customer name
		charges -- data member to store per day charge
		days -- data member to store no. of days of stay
		COMPUTE() -- a function to calculate and return
			  amount as days*charges, if days*charges>11000,
			  then as 1.02*amount.
  => Public Members :-
		Getinfo()
		Display()                                   */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class RESORT
			{
			  private:
				 int room;
				 char name[40];
				 float charge;
				 int days;
				 float amt;
				 void Compute()
					{
					  amt=days*charge;
					  if(amt>11000)
						 amt*=1.02;
					  else
						 amt*=1;
					}
			  public:
				 void Getinfo()
					{
					  cout<<"\n\n\t Enter The Name Of Customer : ";
					  gets(name);
					  cout<<"\n\t How Many Days You Want To Stay Here : ";
					  cin>>days;
					  cout<<"\n\t Enter The Charge Per Day : ";
					  cin>>charge;
					  cout<<"\n\t Enter Your Room Number : ";
					  cin>>room;
					  clrscr();
					}
				 void Display()
					{
					  cout<<"\n\n\t ^^^ Please Check The Following Details";
					  cout<<"\n\n\t Name Of Customer : "<<name;
					  cout<<"\n\t Room Number : "<<room;
					  cout<<"\n\t You Want To Stay "<<days<<" Days.";
					  cout<<"\n\t Charge Per Day Is Rs. "<<charge;
					  Compute();
					  cout<<"\n\t Your Bill Is Rs. "<<days*charge;
					  cout<<"\n\t Your Net Payable Amount Is Rs. "<<amt;
                 cout<<"\n\n\t\t ------ T H A N K  Y O U ------";
					}
			}r;
			void main()
			  {
				 cout<<"\n\n\t\t    ****** W E L C O M E ******";
				 cout<<"\n\n\t\t ---- R O Y A L  R E S O R T ----";
				 cout<<"\n\t\t ________________________________";
				 r.Getinfo();
				 r.Display();
			  }
