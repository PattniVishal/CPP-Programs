// PROGRAM -- 13
//Class SERIAL

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

class SERIAL
	{
	  private:
		 char Title[20];
		 int SerialCode;
		 int No_of_Episode,epi;
		 float Duration,dur;
	  public:
		 SERIAL()
			{
			  No_of_Episode=10;
			  Duration=30;
			}
		 void OtherEnteries()
			{
			  int epi;
			  float dur;
			  SERIAL(int e,float d)
			  epi=e;
			  dur=d;
			  cout<<"\n\t\t Duration Of Serial : "<<dur<<" Minutes.";
			  cout<<"\n\t\t Number Of Episodes : "<<epi;
			}
		 void NewSerial()
			{
			  cout<<"\n\n\t\t Enter The Title Of The Serial : ";
			  gets(Title);
			  cout<<"\n\t\t Enter The Serial Code : ";
			  cin>>SerialCode;
			}
		 void Display()
			{
			  cout<<"\n\n\t\t Title : "<<Title;
			  cout<<"\n\t\t Serial Code : "<<SerialCode;
			  cout<<"\n\t\t Duration : "<<dur;
			  cout<<"\n\t\t Number Of Episodes : "<<epi;
			}

	  }t,t1(10,30);

void main()
  {
	 cout<<"\n\n\t\t      ----------------------------------";
	 cout<<"\n\t\t      ||        W E L C O M E         ||   ";
	 cout<<"\n\t\t      ----------------------------------";
	 cout<<"\n\n\t\t      ||      'B A L A J I'    ||       ";
	 cout<<"\n\t\t      ||        Production House      ||  ";
	 cout<<"\n\t\t      ----------------------------------";
		 t.NewSerial();
		 t1.OtherEnteries();
		 cout<<"\n\n\t\t >>>>>>  DETAILS  <<<<<<"<<endl;
		 t.Display();
	  cout<<"\n\n\t\t  ******  T H A N K    Y O U  ******";
  }