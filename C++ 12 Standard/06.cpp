//PROGRAM -- 6
/*Define a class to represent a book in a library. Include
  => Data Members:
	 code,book_name,auth,pub,price,no. of copies,no.of
	 copies issued.
  => Member Function:
	 (i)To assign initial values
	 (ii)To issue book after checking availability
	 (iii)To return book
	 (iv)To display book information.             */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>

class LIBRARY
		 {
			private:
//			 int code;
//			 char book_name[40];
//			 char auth[40];
//			 char pub[40];
//			 float price;
//			 int av;
			 int rtn;
			 int iss;
			 int age;
			 char name[40];
			 long double phone;
			public:
			 int av;
			 void Getinfo()
				{
				  cout<<"\n\t Enter Your Name : ";
				  gets(name);
				  cout<<"\n\t Enter Your Age : ";
				  cin>>age;
				  cout<<"\n\t Enter Your Phone Number : ";
				  cin>>phone;
				  clrscr();
				}
			 void Display()
				{
				  cout<<"\n\t Name : "<<name;
				  cout<<"\n\t Phone : "<<phone;
				  cout<<"\n\t Age : "<<age;
				}
/*			 int Avail()
				{
				  return av;
				}                    */
			 int Issue()
				{
				  return iss;
				}
			 int Return()
				{
				  return rtn;
				}
		 }l,l1,l2,l3,l4,l5,l6;
		 void main()
			{
			 char con;
			 int ch,what;
			  int no1=l1.Issue();
			  int no2=l2.Issue();
			  int no3=l3.Issue();
			  int no4=l4.Issue();
			  int no5=l5.Issue();
			  int no6=l6.Issue();
			  int ret=l.Return();

			  l1.av=20;
			  l2.av=20;
			  l3.av=20;
			  l4.av=20;
			  l5.av=20;
			  l6.av=20;

			  int pre1=20-l1.av;
			  int pre2=20-l2.av;
			  int pre3=20-l3.av;
			  int pre4=20-l4.av;
			  int pre5=20-l5.av;
			  int pre6=20-l6.av;
//			  l.Avail()=10;
			  cout<<"\n\n\t\t -------------------------------------------------";
			  cout<<"\n\t\t      ------------  W-E-L-C-O-M-E  ------------";
			  cout<<"\n\t\t ----------- N A R M A D  L I B R A R Y ----------";
			  cout<<"\n\t         -------------------------------------------------";
			  l.Getinfo();
			do
			 {
			 clrscr();
			  manager:
			  cout<<"\n\t -------- The Library Manager --------";
			  cout<<"\n\t =====>> 1. Issue A Book <<=====";
			  cout<<"\n\t =====>> 2. Return A Book <<=====";
			  cout<<"\n\t =====>> 3. Exit <<=====";
			  cout<<"\n\t What Do You Want To Do? (1-3): ";
			  cin>>what;
				 switch(what)
				  {
					 case 1:
					 {
					  menu:
					  cout<<"\n\n\t\t ----------------  Books Menu  ----------------";
					  cout<<"\n\n\t"<<"\t   Book"<<"\t\t\t    Author"<<"\t Book Code";
					  cout<<"\n\n1."<<"\t 2 States"<<"\t\t\t Chetan Bhagat"<<"\t C-1011";
					  cout<<"\n2."<<"\t Revolution 2020"<<"\t\t Chetan Bhagat"<<"\t C-546";
					  cout<<"\n3."<<"\t 3 Mistakes Of My Life"<<"\t\t Chetan Bhagat"<<"\t C-999";
					  cout<<"\n4."<<"\t Harry Potter Series"<<"\t\t J.K. Rowling"<<"\t J-123";
					  cout<<"\n5."<<"\t Julius Caesar"<<"\t\t\t W. Shakespeare"<<"\t W-413";
					  cout<<"\n6."<<"\t Accidental Prime Minister"<<"\t Sanjay Baru"<<"\t S-085";
					  cout<<"\n\n\t Which Book You Want To Issue (1-6) : ";
					  cin>>ch;
						switch(ch)
						 {
						  case 1:
							cout<<"\n\n\t Request Processed !!!!";
							error1:
							cout<<"\n\t Number Of Books Availble : "<<l1.av;
							cout<<"\n\t How Many Books You Want To Issue : ";
							cin>>no1;
							if(no1<(l1.av-5))
							{
							 cout<<"\n\t You Issued :- ";
							 cout<<"\n\t Book - 2 States.";
							 cout<<"\n\t Author - Chetan Bhagat.";
							 cout<<"\n\t Book Code - C-1011";
							 cout<<"\n\t Price - 499/-";
							 cout<<"\n\t Books Issued - "<<no1<<" Units";
							 cout<<"\n\t\t Please Return After 15 Days..";
							 l1.av-=no1;
							}
							else
							 {
							  cout<<"\n\t You Cannot Issue Books Out Of Limit..";
							  goto error1;
							 }
							 break;
						 case 2:
							cout<<"\n\n\t Request Processed !!!!";
							error2:
							cout<<"\n\t Number Of Books Availble : "<<l2.av;
							cout<<"\n\t How Many Books You Want To Issue : ";
							cin>>no2;
							if(no2<(l2.av-5))
							{
							 cout<<"\n\t You Issued :- ";
							 cout<<"\n\t Book - Revolution 2020.";
							 cout<<"\n\t Author - Chetan Bhagat.";
							 cout<<"\n\t Book Code - C-546";
							 cout<<"\n\t Price - 449/-";
							 cout<<"\n\t Books Issued - "<<no2<<" Units";
							 cout<<"\n\t\t Please Return After 15 Days..";
							 l2.av-=no2;
							}
							else
							 {
							  cout<<"\n\t You Cannot Issue Books Out Of Limit..";
							  goto error2;
							 }
							break;
						 case 3:
							cout<<"\n\n\t Request Processed !!!!";
							error3:
							cout<<"\n\t Number Of Books Availble : "<<l3.av;
							cout<<"\n\t How Many Books You Want To Issue : ";
							cin>>no3;
							if(no3<(l3.av-5))
							{
							 cout<<"\n\t You Issued :- ";
							 cout<<"\n\t Book - 3 Mistakes Of My Life.";
							 cout<<"\n\t Author - Chetan Bhagat.";
							 cout<<"\n\t Book Code - C-999";
							 cout<<"\n\t Price - 149/-";
							 cout<<"\n\t Books Issued - "<<no3<<" Units";
							 cout<<"\n\t\t Please Return After 15 Days..";
							 l3.av-=no3;
							}
							else
							 {
							  cout<<"\n\t You Cannot Issue Books Out Of Limit..";
							  goto error3;
							 }
							break;
						 case 4:
							cout<<"\n\n\t Request Processed !!!!";
							error4:
							cout<<"\n\t Number Of Books Availble : "<<l4.av;
							cout<<"\n\t How Many Books You Want To Issue : ";
							cin>>no4;
							if(no4<(l4.av-5))
							{
							 cout<<"\n\t You Issued :- ";
							 cout<<"\n\t Book - Harry Potter Series.";
							 cout<<"\n\t Author - J.K.Rowling.";
							 cout<<"\n\t Book Code - J-123";
							 cout<<"\n\t Price - 729/-";
							 cout<<"\n\t Books Issued - "<<no4<<" Units";
							 cout<<"\n\t\t Please Return After 15 Days..";
							 l4.av-=no4;
							}
							else
							 {
							  cout<<"\n\t You Cannot Issue Books Out Of Limit..";
							  goto error4;
							 }
							break;
						 case 5:
							cout<<"\n\n\t Request Processed !!!!";
							error5:
							cout<<"\n\t Number Of Books Availble : "<<l5.av;
							cout<<"\n\t How Many Books You Want To Issue : ";
							cin>>no5;
							if(no5<(l5.av-5))
							{
							 cout<<"\n\t You Issued :- ";
							 cout<<"\n\t Book - Julius Caesar.";
							 cout<<"\n\t Author - William Shakespeare.";
							 cout<<"\n\t Book Code - W-413";
							 cout<<"\n\t Price - 399/-";
							 cout<<"\n\t Books Issued - "<<no5<<" Units";
							 cout<<"\n\t\t Please Return After 15 Days..";
							 l5.av-=no5;
							}
							else
							 {
							  cout<<"\n\t You Cannot Issue Books Out Of Limit..";
							  goto error5;
							 }
							break;
						 case 6:
							cout<<"\n\n\t Request Processed !!!!";
							error6:
							cout<<"\n\t Number Of Books Availble : "<<l6.av;
							cout<<"\n\t How Many Books You Want To Issue : ";
							cin>>no6;
							if(no6<(l6.av-5))
							{
							 cout<<"\n\t You Issued :- ";
							 cout<<"\n\t Book - Accidental Prime Minister.";
							 cout<<"\n\t Author - Sanjay Baru.";
							 cout<<"\n\t Book Code - S-085";
							 cout<<"\n\t Price - 140/-";
							 cout<<"\n\t Books Issued - "<<no6<<" Units";
							 cout<<"\n\t\t Please Return After 15 Days..";
							 l6.av-=no6;
							}
							else
							 {
							  cout<<"\n\t You Cannot Issue Books Out Of Limit..";
							  goto error6;
							 }
							break;
						 default:
							cout<<"\n\t Invalid Choice..Try Again!!";
							goto menu;
						 }
						 break;
					 }
					 case 2:
					 {
					  give:
					  cout<<"\n\n\t\t ----------------  Books Menu  ----------------";
					  cout<<"\n\n\t"<<"\t   Book"<<"\t\t\t    Author"<<"\t Book Code";
					  cout<<"\n\n1."<<"\t 2 States"<<"\t\t\t Chetan Bhagat"<<"\t C-1011";
					  cout<<"\n2."<<"\t Revolution 2020"<<"\t\t Chetan Bhagat"<<"\t C-546";
					  cout<<"\n3."<<"\t 3 Mistakes Of My Life"<<"\t\t Chetan Bhagat"<<"\t C-999";
					  cout<<"\n4."<<"\t Harry Potter Series"<<"\t\t J.K. Rowling"<<"\t J-123";
					  cout<<"\n5."<<"\t Julius Caesar"<<"\t\t\t W. Shakespeare"<<"\t W-413";
					  cout<<"\n6."<<"\t Accidental Prime Minister"<<"\t Sanjay Baru"<<"\t S-085";
					  cout<<"\n\n\t Which Book You Want To Return (1-6) : ";
					  cin>>ch;
						switch(ch)
						 {
						  case 1:
							cout<<"\n\n\t Request Processed !!!!";
							cheat1:
							cout<<"\n\t Number Of Books Availble : "<<l1.av;
							cout<<"\n\t You Issued "<<pre1<<" Books Previously.";
							cout<<"\n\t How Many Books You Want To Return : ";
							cin>>ret;
							  if(ret<=no1)
								{
								 cout<<"\n\t You Returned :- ";
								 cout<<"\n\t Book - 2 States.";
								 cout<<"\n\t Author - Chetan Bhagat.";
								 cout<<"\n\t Book Code - C-1011";
								 cout<<"\n\t Price - 499/-";
								 cout<<"\n\t Books Returned - "<<ret<<" Units";
								 l1.av+=ret;
								 break;
								}
							  else
								{
								 cout<<"\n\t Not Valid Number Of Books...";
								 goto cheat1;
								}
						  case 2:
							cout<<"\n\n\t Request Processed !!!!";
							cheat2:
							cout<<"\n\t Number Of Books Availble : "<<l2.av;
							cout<<"\n\t You Issued "<<pre2<<" Books Previously.";
							cout<<"\n\t How Many Books You Want To Return : ";
							cin>>ret;
							  if(ret<=no2)
								{
								 cout<<"\n\t You Returned :- ";
								 cout<<"\n\t Book - Revolution 2020.";
								 cout<<"\n\t Author - Chetan Bhagat.";
								 cout<<"\n\t Book Code - C-546";
								 cout<<"\n\t Price - 449/-";
								 cout<<"\n\t Books Returned - "<<ret<<" Units";
								 l2.av+=ret;
								 break;
								}
							  else
								{
								 cout<<"\n\t Not Valid Number Of Books...";
								 goto cheat2;
								}
						  case 3:
							cout<<"\n\n\t Request Processed !!!!";
							cheat3:
							cout<<"\n\t Number Of Books Availble : "<<l3.av;
							cout<<"\n\t You Issued "<<pre3<<" Books Previously.";
							cout<<"\n\t How Many Books You Want To Return : ";
							cin>>ret;
							  if(ret<=no3)
								{
								 cout<<"\n\t You Returned :- ";
								 cout<<"\n\t Book - 3 Mistakes Of My Life.";
								 cout<<"\n\t Author - Chetan Bhagat.";
								 cout<<"\n\t Book Code - C-999";
								 cout<<"\n\t Price - 149/-";
								 cout<<"\n\t Books Returned - "<<ret<<" Units";
								 l3.av+=ret;
								 break;
								}
							  else
								{
								 cout<<"\n\t Not Valid Number Of Books...";
								 goto cheat3;
								}
						  case 4:
							cout<<"\n\n\t Request Processed !!!!";
							cheat4:
							cout<<"\n\t Number Of Books Availble : "<<l4.av;
							cout<<"\n\t You Issued "<<pre4<<" Books Previously.";
							cout<<"\n\t How Many Books You Want To Return : ";
							cin>>ret;
							  if(ret<=no4)
								{
								 cout<<"\n\t You Returned :- ";
								 cout<<"\n\t Book - Harry Potter Series.";
								 cout<<"\n\t Author - J.K.Rowling.";
								 cout<<"\n\t Book Code - J-123";
								 cout<<"\n\t Price - 729/-";
								 cout<<"\n\t Books Returned - "<<ret<<" Units";
								 l4.av+=ret;
								 break;
								}
							  else
								{
								 cout<<"\n\t Not Valid Number Of Books...";
								 goto cheat4;
								}
						  case 5:
							cout<<"\n\n\t Request Processed !!!!";
							cheat5:
							cout<<"\n\t Number Of Books Availble : "<<l5.av;
							cout<<"\n\t You Issued "<<pre5<<" Books Previously.";
							cout<<"\n\t How Many Books You Want To Return : ";
							cin>>ret;
							  if(ret<=no5)
								{
								 cout<<"\n\t You Returned :- ";
								 cout<<"\n\t Book - Julius Caesar.";
								 cout<<"\n\t Author - William Shakespeare.";
								 cout<<"\n\t Book Code - W-413";
								 cout<<"\n\t Price - 399/-";
								 cout<<"\n\t Books Returned - "<<ret<<" Units";
								 l5.av+=ret;
								 break;
								}
							  else
								{
								 cout<<"\n\t Not Valid Number Of Books...";
								 goto cheat5;
								}
						  case 6:
							cout<<"\n\n\t Request Processed !!!!";
							cheat6:
							cout<<"\n\t Number Of Books Availble : "<<l6.av;
							cout<<"\n\t You Issued "<<pre6<<" Books Previously.";
							cout<<"\n\t How Many Books You Want To Return : ";
							cin>>ret;
							  if(ret<=no6)
								{
								 cout<<"\n\t You Returned :- ";
								 cout<<"\n\t Book - Accidental Prime Minister.";
								 cout<<"\n\t Author - Sanjay Baru.";
								 cout<<"\n\t Book Code - S-085";
								 cout<<"\n\t Price - 140/-";
								 cout<<"\n\t Books Returned - "<<ret<<" Units";
								 l6.av+=ret;
								 break;
								}
							  else
								{
								 cout<<"\n\t Not Valid Number Of Books...";
								 goto cheat6;
								}
						 default:
							cout<<"\n\t Invalid Choice..Try Again!!";
							goto give;
						 }
						 break;
					 }
					 case 3:
					  {
						cout<<"\n\n\t-------  T H A N K  Y O U  -------";
						cout<<"\n\t--- A Project By Vishal Pattni ---";
						cout<<"\n\t----------------------------------";
						exit(0);
					  }
					 default:
					  {
						cout<<"\n\n\t Please Check Your Choice!!";
						goto manager;
					  }
				  }
				  cout<<"\n\t Do You Want To Continue (Y/N) ? : ";
				  cin>>con;
			 }while(con=='Y' || con=='y');
			}
