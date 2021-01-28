//PROGRAM - 11
/*Define a class TRAVEL in C++ with following description :
  => Private Members :
	- T_Code           string
	- No_of_Adults     integer
	- No_of_Children   integer
	- Distance         integer
	- TotalFare        float

  => Public Members :
	A constructer to assign initial values as follows:
	 - T_Code with the word "NULL"
	 - No_of_Adults as 0
	 - No_of_Children as 0
	 - Distance as 0
	 - TotalFare as 0
	A function AssignFare() which calculates and assigns the value of data member TotalFare as follows:
	 For each Adult ------      Fare(Rs)                For Distance(km)
										  500                       >=1000
										  300                       <1000 & >=500
										  200                       <500
	  - All the fare for the children is 50% of adults.                 */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

class TRAVEL
	{
	  private:
		 char T_Code[20];
		 int No_of_Adults;
		 int No_of_Children;
		 int Distance;
		 float TotalFare;
	  public:
		 TRAVEL()
			{
			  strcpy(T_Code,"NULL");
			  No_of_Adults=0;
			  No_of_Children=0;
			  Distance=0;
			  TotalFare=0;
			}
		 void AssignFare()
			{
			  if(Distance>=1000)
				 TotalFare=(No_of_Adults*500) + (No_of_Children*250);
			  if(Distance>=500 && Distance<1000)
				 TotalFare=(No_of_Adults*300) + (No_of_Children*150);
			  if(Distance<500)
				 TotalFare=(No_of_Adults*200) + (No_of_Children*100);
			}
		 void Enter()
			{
			  cout<<"\n\n\t\t Enter The Travel Code (Only Characters) : ";
			  gets(T_Code);
			  cout<<"\n\t\t Enter Number Of Adults : ";
			  cin>>No_of_Adults;
			  cout<<"\n\t\t Enter Number Of Children : ";
			  cin>>No_of_Children;
			  cout<<"\n\t\t Enter Distance To Travel : ";
			  cin>>Distance;
			  AssignFare();
			}
		 void Display()
			{
			  cout<<"\n\n\t\t Travel Code : "<<T_Code;
			  cout<<"\n\t\t Number Of Adults : "<<No_of_Adults;
			  cout<<"\n\t\t Number Of Children : "<<No_of_Children;
			  cout<<"\n\t\t Distance To Travel : "<<Distance;
			  cout<<"\n\t\t Your Total Fare Is Rs. "<<TotalFare;
			}

	  }t;

void main()
  {
	 char cont;
	 cout<<"\n\n\t\t      ----------------------------------";
	 cout<<"\n\t\t      ||        W E L C O M E         ||   ";
	 cout<<"\n\t\t      ----------------------------------";
	 cout<<"\n\n\t\t      ||      'T H E    R O Y A L'    ||       ";
	 cout<<"\n\t\t      ||        Tour And Travels      ||  ";
	 cout<<"\n\t\t      ----------------------------------";
	 do
	  {
		 cout<<"\n\n\t\t     ~~~~  Enter Passenger's Details  ~~~~";
		 t.Enter();
		 clrscr();
		 cout<<"\n\n\t\t >>>>>>  PASSENGER'S DETAILS  <<<<<<"<<endl;
		 t.Display();
		 cout<<"\n\n\t\t Do You Want To Continue (Y/N) ? : ";
		 cin>>cont;
		 clrscr();
	  }while(cont=='y' || cont=='Y');
	  cout<<"\n\n\t\t  ******  T H A N K    Y O U  ******";
  }

