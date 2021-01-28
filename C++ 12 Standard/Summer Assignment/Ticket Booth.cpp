/*     _ +-------------------------------------------+ _
		/o)|                  Pattni                   |(o\
	  / / |                  Vishal                   | \ \
	 ( (_ |  _                 J.                  _  | _) )
	((\ \)+-/o)-----------------------------------(o\-+(/ /))
	(\\\ \_/ /                                     \ \_/ ///)
	 \      /                                       \      /
	  \____/                                         \____/            */
// S U M M E R  A S S I G N M E N T  -- 10
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

/* Imagine a ticket selling booth at a fair. People passing by are requested
  to purchase a ticket.A ticket is priced as Rs. 2.50/-. The booth keeps the
  track on number of people visited the booth, and of the total of the money
  collected. Model this ticketselling booth via class called TICBOOTH
  including following members:
	=> Data Members :
	 - number of people visited
	 - total number of money collected.
	=> Members functions :
	 - to assign initial values (assign 0 to both data members
	 - ti increment only people total in case ticket is not sold out
	 - to increment people total as well as amount total if a ticket is sold out
	 - to display the two totals
	 - to display the number of tickets sold out(a tricky one).
	Include a program to test this class.                           */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>

class TICBOOTH
	 {
		private:
		 int tic_sold;
		 int peo_vis;
		 int no;
		 float sale,tot;
		 char yn;

		public:

		 TICBOOTH()
		  {
			 tic_sold=0;
			 peo_vis=0;
			 no=0;
			 sale=0.0;
			 tot=0.0;
		  }

		 void Show()
		  {
			 clrscr();
			 cout<<"\n\n\t Loading Record Till Now ...";
			 cout<<"\n\n\t Number Of People Visited The Fair : "<<peo_vis;
			 cout<<"\n\t Number Of Tickets Sold : "<<tic_sold;
			 cout<<"\n\t Toal Sale From Tickets : "<<(tic_sold*2.50)<<" Rs.";
		  }

		 void Visit()
		  {
			 char choice;
			 clrscr();
			 cout<<"\n\t Hey !! Here Is A Ticket For A Lucky Draw ....";
			 cout<<"\n\n\t Do You Want To Buy It (Y/N) ? : ";
			 cin>>yn;
				 if(yn=='y' || yn=='Y')
				  {
					 cout<<"\n\t Price Per Ticket Is Rs. 2.50 ..";
					 cout<<"\n\t You Have Purchased One Ticket... ";
					 tic_sold++;
					 peo_vis++;
					 cout<<"\n\n\t   T  H  A  N  K    Y  O  U ";
					 cout<<"\n\t -----------------------------";
					 cout<<endl<<endl;
				  }

				 else
				  {
					 clrscr();
					 peo_vis++;
					 cout<<"\n\t Okay !  Go On And Enjoy The Fair Now...";
					 cout<<"\n\n\t   T  H  A  N  K    Y  O  U ";
					 cout<<"\n\t ------------------------------";
					 cout<<endl<<endl;
				  }
		  }
	 }t;

void main()
  {
	 int sw;
	 char cont,choice;
	 cout<<"\n\t  .-.________               (o o)                 ________.-."
		  <<"                 ----/ \_)_______)  +-oooO-------(_)------------+    (_______(_/ \----           "
		  <<"    (    ()___)     |     Surat                 |      (___()     )              "
		  <<"        ()__)      |            Fun            |       (__()                    "
		  <<"----\\___()_)       |                 Fair      |        (_()___/----            "
		  <<"                   +------------Ooo------------+                                ";
	 cout<<"\n\t       ******     W   E   L   C   O   M   E     ******   ";
  do{
	 again3:
	 cout<<"\n\n\n\t -------  M A I N  M E N U  --------";
	 cout<<"\n\n\t 1. Entering Ticket Booth.";
	 cout<<"\n\t 2. Check Total Sale And People Visited.";
	 cout<<"\n\t 3. Exit";
	 cout<<"\n\t What Do You Want To Do ? (1/2/3) : ";
	 cin>>sw;
		switch (sw)
		  {
			 case 1:
			 a:
				t.Visit();
					 cout<<"\n\t Do You Want To Buy More Tickets (Y/N) : ";
					 cin>>choice;
						if(choice=='y' || choice=='Y')
						  goto a;
						else
						 {
						  cout<<"\n\t Returning To Main Menu..!!";
						  goto again3;
						 }
				goto again3;
				break;
			 case 2:
				t.Show();
				goto again3;
				break;
			 case 3:
				cout<<"\n\t -------------------------------------------------";
				cout<<"\n\t||    V   I   S   I   T     A   G   A   I   N    ||";
				cout<<"\n\t -------------------------------------------------";
				exit(0);
				break;
			 default:
				cout<<"\n Enter Valid Choice... (1/2/3)";
				goto again3;
				break;
	 cout<<"\n\t Do You Want To Continue (Y/N) : ";
	 cout<<cont;
		  }
	 }while(cont=='y' || cont=='Y');
  }
