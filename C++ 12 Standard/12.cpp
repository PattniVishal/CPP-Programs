//PROGRAM - 11
//  Class TRAVELPLAN

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

class TRAVELPLAN
	{
	  private:
		 char Place[20];
		 long PlanCode;
		 int No_of_Traveller;
		 int No_of_Bus;
	  public:
		 TRAVELPLAN()
			{
			  PlanCode=1001;
			  strcpy(Place,"agra");
			  No_of_Traveller=5;
			  No_of_Bus=1;
			}
		 void NewPlan()
			{
			  if(No_of_Traveller<20)
				 No_of_Bus=1;
			  if(No_of_Traveller>=20 && No_of_Traveller<40)
				 No_of_Bus=2;
			  if(No_of_Traveller>=40)
				 No_of_Bus=3;
			}
		 void Enter()
			{
			  cout<<"\n\n\t\t Enter The Travel Plan Code (Only Digits) : ";
			  cin>>PlanCode;
			  cout<<"\n\t\t Enter The Destination Place : ";
			  gets(Place);
			  cout<<"\n\t\t Enter Number Of Travellers : ";
			  cin>>No_of_Traveller;
			  NewPlan();
			}
		 void Display()
			{
			  cout<<"\n\n\t\t The Travel Plan Code : "<<PlanCode;
			  cout<<"\n\t\t Destination Place : "<<Place;
			  cout<<"\n\t\t Number Of Travellers : "<<No_of_Traveller;
			  cout<<"\n\t\t Number Of Buses : "<<No_of_Bus;
			}

	  }t;

void main()
  {
	 char yn;
	 cout<<"\n\n\t\t      ----------------------------------";
	 cout<<"\n\t\t      ||        W E L C O M E         ||   ";
	 cout<<"\n\t\t      ----------------------------------";
	 cout<<"\n\n\t\t      ||      'T H E    R O Y A L'    ||       ";
	 cout<<"\n\t\t      ||        Tour And Travels      ||  ";
	 cout<<"\n\t\t      ----------------------------------";

		 cout<<"\n\n\t\t ~~~~  We Prefer You The Following Travel Plan  ~~~~";
		 TRAVELPLAN();
		 t.Display();
		 cout<<"\n\n\t\t Do Yo Want To Modify The Plan ? (Y/N) : ";
		 cin>>yn;
		 clrscr();
			if(yn=='Y' || yn=='y')
			 {
				cout<<"\n\n\t\t     ~~~~  Enter Passenger's Details  ~~~~";
				t.Enter();
				clrscr();
				cout<<"\n\n\t\t >>>>>>  YOUR TRAVEL PLAN DETAILS  <<<<<<"<<endl;
				t.Display();
			 }
			else
			 {
				cout<<"\n\n\t\t You Have Selected Our AGRA - 1001 Plan...";
				TRAVELPLAN();
				t.Display();
				cout<<"\n\t\t Ok Then ! Have A Nice Journey !!";
			 }
	  cout<<"\n\n\t\t  ******  T H A N K    Y O U  ******";
  }