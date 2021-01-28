/*     _ +-------------------------------------------+ _
		/o)|                  Pattni                   |(o\
	  / / |                  Vishal                   | \ \
	 ( (_ |  _                 J.                  _  | _) )
	((\ \)+-/o)-----------------------------------(o\-+(/ /))
	(\\\ \_/ /                                     \ \_/ ///)
	 \      /                                       \      /
	  \____/                                         \____/            */
// S U M M E R  A S S I G N M E N T  -- 8
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

/* Define a class batsman with following specifications:
  => private members:
		 bcode                   4 digit code number
		 bname                   20 characters
		 innings,notout,runs     it is calculated according to
										  the formula -
										  batavg=runs(innings-notout)
		 calavg()                function to compute batavg
  => publib members:
		 readdata()        function to invoke value from bcode,
								  name,innings,notout and calavg()
		 displaydata()     function to display the data members        */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class BATSMAN
	 {
		private:
		 int bcode;
		 char bname[20],team[10];
		 int inn,notout,run;
		 float d,batavg;
			void Calavg()
			 {
			  d=(inn-notout);
			  batavg=run/d;
			 }
		public:
		 void Readdata()
		  {
			cout<<"\n\n\t *****  Enter Details Of Batsman  *****";
			cout<<"\n\t Enter Batsman's Name : ";
			gets(bname);
			cout<<"\n\t Enter Batsman's Code : ";
			cin>>bcode;
			cout<<"\n\t Enter Batsman's Team : ";
			gets(team);
			cout<<"\n\t Enter Total Innings Played : ";
			cin>>inn;
			cout<<"\n\t Enter Total 'Notouts' : ";
			cin>>notout;
			cout<<"\n\t Enter Total Runs Made By Batsman : ";
			cin>>run;
			clrscr();
		  }
		 void Displaydata()
		  {
			cout<<"\n\t -----  IPL CAREER  -----";
			cout<<"\n\t Name : "<<bname;
			cout<<"\n\t Code : "<<bcode;
			cout<<"\n\t Team : "<<team;
			cout<<"\n\t Innings : "<<inn;
			cout<<"\n\t Rums : "<<run;
			cout<<"\n\t Notouts : "<<notout;
			Calavg();
			cout<<"\n\t Average : "<<batavg;
		  }
	 }c;
	 void main()
	  {
	  char cont;
		do
		{
		  cout<<"\n\t ---===- Board of Control for Cricket in India -===---";
		  c.Readdata();
		  c.Displaydata();
		  cout<<"\n\n\t Do You Want To Continue? (Y/N) : ";
		  cin>>cont;
		  clrscr();
		}while(cont=='y' || cont=='Y');
	  cout<<"\n\n\t -------- T H A N K  Y O U --------";
	  cout<<"\n\t   -------=== B C C I ===-------";
	  }



