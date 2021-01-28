/*     _ +-------------------------------------------+ _
		/o)|                  Pattni                   |(o\
	  / / |                  Vishal                   | \ \
	 ( (_ |  _                 J.                  _  | _) )
	((\ \)+-/o)-----------------------------------(o\-+(/ /))
	(\\\ \_/ /                                     \ \_/ ///)
	 \      /                                       \      /
	  \____/                                         \____/            */
// S U M M E R  A S S I G N M E N T  -- 2
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

/* Declare a class to represent a bank account of 5 customers with
  following data members. Name of depositor, account number,
  type of account('S' for Savings and 'C' for Current), balance
  amount. The class also contains member fuctions...
	(i)To initialize data members
	(ii)To deposit money.
	(iii)To withdraw money after checking the balance(min Rs. 1000)
	(iv)To display the data members.                   */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>

class BANK
	  {
		 private:
		  long int ac;
		  char name[40];
		  float bal;
		  char typ[30],type;
		  char pass[10];
		  float wth;
		  char pass1[10],pass2[10];
		  float dep;

		 public:
		  void Getinfo()
			{
			 cout<<"\n\n\t Enter Your Account Number(10 digits) : ";
			 cin>>ac;
			 cout<<"\n\t Enter Your Password : ";
			 gets(pass);
			 cout<<"\n\t Enter Your Name : ";
			 gets(name);
			 cout<<"\n\t Enter Your Current Balance : ";
			 cin>>bal;
			 cout<<"\n\t ....Please Enter Your Account Type.... ";
			 cout<<"\n\t Enter 'S' For Savings Account..";
			 cout<<"\n\t Enter 'C' For Current Account..";
			 cin>>type;
				if(type=='s' || type=='S')
				  strcpy(typ,"Savings Account");
				if(type=='c' || type=='C')
				  strcpy(typ,"Current Account");
			 clrscr();
			}
		  void Withdraw()
			{
			 pass:
			 cout<<"\n\t Enter Your Password : ";
			 gets(pass1);
			  if(strcmp(pass1,pass)==0)
				{
				 wthdrw:
				 cout<<"\n\t How Much Amount You Want To Withdraw : ";
				 cin>>wth;
				  if(wth<=bal)
					{
					 cout<<"\n\t !! Transaction Successful !!";
					 cout<<"\n\t You Withdrew Amount "<<wth<<" /- Rs";
					 bal-=wth;
					 cout<<"\n\t Your Remaining Balance Is Rs."<<bal<<" /-";
					}
				  else
					{
					 cout<<"\n\t You Don't Not Have Sufficient Balance!!!";
					 cout<<"\n\t Please Try To Withdraw Less Amount..";
					 goto wthdrw;
					}
				}
			  else
				{
				 cout<<"\n\t Passowrd Not Matched..Try Again !!";
				 goto pass;
				}
			}
		  void Deposit()
			{
			 float bal1=0;
			 pasd:
			 cout<<"\n\t Enter Your Password : ";
			 gets(pass2);
			  if(strcmp(pass2,pass)==0)
				{
				 cout<<"\n\t ....Please Enter Your Account Type.... ";
				 cout<<"\n\t Enter 'S' For Savings Account..";
				 cout<<"\n\t Enter 'C' For Current Account..";
				 cin>>type;
					if(type=='s' || type=='S')
					  strcpy(typ,"Savings Account");
					if(type=='c' || type=='C')
					  strcpy(typ,"Current Account");
				 cout<<"\n\t How Much Amount You Want To Deposit : ";
				 cin>>dep;
				 bal1=bal;
				 bal+=dep;
				 clrscr();
				}
			  else
				{
				 cout<<"\n\t Password Not Matched..Try Again !!";
				 goto pasd;
				}
			 cout<<"\n\n\t !! Deposit Successfull !!";
			 cout<<"\n\t Account Number : "<<ac;
			 cout<<"\n\t Name : "<<name;
			 cout<<"\n\t Old Balance : "<<bal1;
			 cout<<"\n\t Account Type : "<<typ;
			 cout<<"\n\t Amount Deposited : "<<dep;
			 cout<<"\n\t Your New Balance : "<<bal;
			}
		  void Display()
			{
			 cout<<"\n\n\t Account Number : "<<ac;
			 cout<<"\n\t Name : "<<name;
			 cout<<"\n\t Current Balance : "<<bal;
			 cout<<"\n\t Account Type : "<<typ;
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
					<<"\n\t 2.  Deposit Money."
					<<"\n\t 3.  Withdraw Money."
					<<"\n\t 4.  Exit.";
			  cout<<"\n\t What Would You Like To Do ?(1-4) : ";
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
						cout<<"\n\n\t ----- Deposit Money -----";
						reenter2:
						cout<<"\n\n\t Enter Your Account Number(10 digits) : ";
						cin>>acc;
						 for(i=0;i<2;i++)
						  {
							if(acc==b[i].Getacc())
							 {
							  b[i].Deposit();
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
						cout<<"\n\n\t ----- Withdraw Money -----";
						reenter3:
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
							 goto reenter3;
							}
						 break;
					  case 4:
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
					clrscr();
			 }while(cont=='y' || cont=='Y');
			cout<<"\n\n\t ------ T H A N K  Y O U ------";
			cout<<"\n\t     ****  ICICI BANK  ****";
			exit(0);
		 }
