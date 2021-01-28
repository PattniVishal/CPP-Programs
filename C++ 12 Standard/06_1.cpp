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
			 int code;
			 char book_name[40];
			 char auth[40];
			 char pub[40];
			 float price;
			 int no_iss;
			 int no_ret;
			 int age;
			 int tot;
			 char name[40];
			 long double mob;
			public:
			 void IssGetinfo()
				{
				  cout<<"\n\t Enter Your Name : ";
				  gets(name);
				  cout<<"\n\t Enter Your Mobile Number : ";
				  cin>>mob;
				  cout<<"\n\t Enter Your Age : ";
				  cin>>age;
				  cout<<"\n\t Enter Name Of Book To Issue : ";
				  gets(book_name);
				  cout<<"\n\t Enter The Name Of Author : ";
				  gets(auth);
				  cout<<"\n\t Enter The Name Of Publisher : ";
				  gets(pub);
				  cout<<"\n\t How Many Books You Want To Issue : ";
				  cin>>no_iss;
				  clrscr();
				}
			 void IssDisplay()
				{
				 price=400;
				  cout<<"\n\n\t Name : "<<name;
				  cout<<"\n\n\t Mobile Number : "<<mob;
				  cout<<"\n\n\t Your Age : "<<age;
				  cout<<"\n\n\t Name Of Book To Issue : "<<book_name;
				  cout<<"\n\n\t Name Of The Author : "<<auth;
				  cout<<"\n\n\t Name Of The Publisher : "<<pub;
				  cout<<"\n\n\t Price Of The Book : "<<price<<"/- (Per Unit)";
				  cout<<"\n\n\t Number Of Books Issued : "<<no_iss<<" Units";
				}
			 void Retinfo()
				{
				  cout<<"\n\t Enter Your Name : ";
				  gets(name);
				  cout<<"\n\t Enter Your Mobile Number : ";
				  cin>>mob;
				  cout<<"\n\t Enter Your Age : ";
				  cin>>age;
				  cout<<"\n\t Enter Name Of Book To Return : ";
				  gets(book_name);
				  cout<<"\n\t Enter The Name Of Author : ";
				  gets(auth);
				  cout<<"\n\t Enter The Name Of Publisher : ";
				  gets(pub);
				  cout<<"\n\t How Many Books You Want To Return : ";
				  cin>>no_ret;
				}
			 void RetDisplay()
				{
				 price=400;
				  cout<<"\n\t Name : "<<name;
				  cout<<"\n\t Mobile Number : "<<mob;
				  cout<<"\n\t Your Age : "<<age;
				  cout<<"\n\t Name Of Book To Return : "<<book_name;
				  cout<<"\n\t Name Of The Author : "<<auth;
				  cout<<"\n\t Name Of The Publisher : "<<pub;
				  cout<<"\n\t Price Of The Book : "<<price<<"/- (Per Unit)";
				  cout<<"\n\t Number Of Books Returned : "<<no_ret<<" Units";
				}
			 int Issues()
				{
				  return no_iss;
				}
			 int Returns()
				{
				  return no_ret;
				}
			 int Total()
				{
				  return tot;
				}
		 }l;
		 void main()
			{
			  int ch,x,y,z;
			  char cont;
			  y=l.Total();
			  cout<<"\n\n\t\t -------------------------------------------------";
			  cout<<"\n\t\t      ------------  W-E-L-C-O-M-E  ------------";
			  cout<<"\n\t\t ----------- N A R M A D  L I B R A R Y ----------";
			  cout<<"\n\t\t -------------------------------------------------";
		 do
		  {
			  main_menu:
			  cout<<"\n\n\t ~-~-~-~-~-~  Main Menu  ~-~-~-~-~-~";
			  cout<<"\n\t 1.  Issue A Book.";
			  cout<<"\n\t 2.  Return A Book.";
			  cout<<"\n\t 3.  Exit.";
			  cout<<"\n\t What You Want To Do (1-3) : ";
			  cin>>ch;
				switch(ch)
				{
				 case 1:
					l.IssGetinfo();
					if(l.Issues()<=10)
					  {
						l.IssDisplay();
						cout<<"\n\t Please Return The Book After 15 Days..";
					  }
					else
					  {
						cout<<"\n\t There Are Only 20 Units Of This Book In Library..";
						cout<<"\n\t You Cannot Issue More Than 10 Units At A Time!!";
						goto main_menu;
					  }
				  break;
				 case 2:
					l.Retinfo();
					if(l.Returns()<=l.Issues())
					  {
						l.RetDisplay();
						cout<<"\n\t Thank You For Returning The Book..";
					  }
					break;
				 case 3:
					exit(0);
					break;
				 default:
					cout<<"\n\t Not Valid Choice!! Try Again..";
					goto main_menu;
				}
				cout<<"\n\t Do You Want To Continue (Y/N)? : ";
				cin>>cont;
            clrscr();
		  }while(cont=='Y' || cont=='y');
		 }





