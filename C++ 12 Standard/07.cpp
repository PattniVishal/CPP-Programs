//PROGRAM -- 07
/*Declare a class to represent fixed deposit account of 10 customers
  with the following data members : name of depositor, account no.,
  time period(1 or 3 or 5) years, amount. The class also contains...
	 (i) To initialise data members.
	 (ii) For withdrawl of money after half of the time passed.
	 (iii) To display data members.         */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>

class BANK
	  {
		 private:
		  long int ac;
		  char name[40];
		  float bal;
		  int time;
		  float wth;
		  float t1;

		 public:
		  void Getinfo()
			{
			 cout<<"\n\n\t Enter Your Account Number(10 digits) : ";
			 cin>>ac;
			 cout<<"\n\t Enter Your Name : ";
			 gets(name);
			 cout<<"\n\t Enter Your Current Balance : ";
			 cin>>bal;
			 cout<<"\n\t Upto How Many Years You Would Like To Create F.D.? : ";
			 cin>>time;
			 clrscr();
			}
		  void Withdraw()
			{
			 cout<<"\n\t Enter Your Name : ";
			 gets(name);
			 cout<<"\n\t How Many Years Passed Since F.D. Created : ";
			 cin>>t1;
			  if(t1>time/2)
				{
				 wthdrw:
				 cout<<"\n\t How Much Amount You Want To Withdraw : ";
				 cin>>wth;
				  if(wth<bal)
					{
					 cout<<"\n\t !! Transaction Successful !!";
					 cout<<"\n\t You Withdrew Amount "<<wth<<" /- Rs";
					 bal-=wth;
					 cout<<"\n\t Your Remaining Balance Is Rs."<<bal<<" /-";
					}
				  else
					{
					 cout<<"\n\t You Don Not Have Sufficient Balance!!!";
					 cout<<"\n\t Please Try To Withdraw Less Amount..";
					 goto wthdrw;
					}
				}
			  else
				{
				 cout<<"\n\t You Cannot Withdraw Cash At The Moment !!";
				 cout<<"\n\t In Sufficient Time Passed..";
				}
			}
		  void Display()
			{
			 cout<<"\n\n\t Account Number : "<<ac;
			 cout<<"\n\t Name : "<<name;
			 cout<<"\n\t Current Balance : "<<bal;
			 cout<<"\n\t Time Period For F.D. : "<<time;
			}
		  long int Getacc()
			{
			 return ac;
			}
	  }b[2];
	  void main()
		 {
		  char cont;
		  long int acc;
		  int ch,flag=0,i;
		  cout<<"\n\t\t *********  I C I C I   B A N K   *********";
		  cout<<"\n\t\t                      Rakhe Khayal Aapka";
		  cout<<"\n\t\t __________________________________________";
		  for(i=0;i<2;i++)
			{
			 cout<<"\n\n\t --- Enter The Details Of Account Holder "<<i+1<<" ---";
				b[i].Getinfo();
			}
			 do
			 {
			  tryagain:
			  cout<<"\n\n\t ------   Main Menu   ------";
			  cout<<"\n\t 1.  Display Account Information."
					<<"\n\t 2.  Withdraw Money."
					<<"\n\t 3.  Exit.";
			  cout<<"\n\t What Would You Like To Do ?(1-3) : ";
			  cin>>ch;
				 switch(ch)
					{
					  case 1:
						cout<<"\n\n\t ----- Account Information -----";
						reenter1:
						cout<<"\n\t Enter Your Account Number : ";
						cin>>acc;
						 for(i=0;i<2;i++)
						  {
							if(acc==b[i].Getacc())
							 {
							 cout<<"\n\t ----- Account Information -----";
							 b[i].Display();
							 flag=1;
                      }
						  }
						  if(!flag)
							{
							 cout<<"\n\t Account Number Not Matched..Try Again !!";
							 goto reenter1;
							}
						 break;
					  case 2:
						cout<<"\n\n\t ----- Withdraw Money -----";
						reenter2:
						cout<<"\n\n\t Enter Your Account Number(10 digits) : ";
						cin>>acc;
						 for(i=0;i<2;i++)
						  {
							if(acc==b[i].Getacc())
							 {
							  b[i].Withdraw();
							  flag=1;
							 }
						  }
						  if(!flag)
							{
							 cout<<"\n\t Account Number Not Matched..Try Again !!";
							 goto reenter2;
							}
						 break;
					  case 3:
						 cout<<"\n\n\t ------ T H A N K  Y O U ------";
						 cout<<"\n\t     ****  ICICI BANK  ****";
						 exit(0);
						 break;
					  default:
						 cout<<"\n\n\t Wrong Choice!! Try Again..";
						 goto tryagain;
						 break;
					}
					cout<<"\n\n\t Do You Want To Continue(Y/N) ? : ";
					cin>>cont;
			 }while(cont=='y' || cont=='Y');
			cout<<"\n\n\t ------ T H A N K  Y O U ------";
			cout<<"\n\t     ****  ICICI BANK  ****";
			exit(0);
		 }



