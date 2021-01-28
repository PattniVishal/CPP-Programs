//PROGRAM -- 4
/*Program using  class to store price list of 10 items and to
  print the largest price as well as sum of all prices.      */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>

class STORE
		  {
			 private:
			  int code[10];
			  float price[10];
			 public:
			  void Getinfo();
			  float Largest();
			  float Sum();
			  void Display();
		  }s;
		  void STORE::Getinfo()
			{
			  for(int i=0;i<10;i++)
				{
				 cout<<"\n\t Enter Details Of Item "<<i+1;
				 cout<<"\n\n\t Enter The Item Code : ";
				 cin>>code[i];
				 cout<<"\n\t Enter The Price Of The Item : ";
				 cin>>price[i];
				}
				clrscr();
			}
		  float STORE::Largest()
			 {
				float large=price[0];
				 for(int i=0;i<10;i++)
				  {
					if(price[i]>large)
					large=price[i];
				  }
			  return large;
			 }
		  float STORE::Sum()
			 {
				float sum=0;
				 for(int i=0;i<10;i++)
				  sum+=price[i];
				return sum;
			 }
		  void STORE::Display()
			 {
				cout<<"\n\n\t\t Please Check The Below List..";
				cout<<"\n\n\t\tCode"<<"\tPrice";
				 for(int i=0;i<10;i++)
					cout<<"\n\t\t"<<code[i]<<"\t"<<price[i];
			 }
		  void main()
			 {
				cout<<"\n\t\t ******  WELCOME TO MY STORE  ******";
				s.Getinfo();
				float tot;
				float big;
				int ch;
				char cont;
				 again:
				  do
					{
					 cout<<"\n\n\t\t ------ M A I N  M E N U ------";
					 cout<<"\n\t\t ------------------------------";
					 cout<<"\n\t\t 1. Display Largest Price.";
					 cout<<"\n\t\t 2. Display Sum Of All Prices.";
					 cout<<"\n\t\t 3. Display Full List.";
					 cout<<"\n\t\t 4. Exit.";
					 cout<<"\n\t\t Enter Your Choice..... ";
					 cin>>ch;
					  switch(ch)
						 {
							case 1:
							 big=s.Largest();
							 cout<<"\n\n\t\t The Largest Price Is "<<big;
							 break;
							case 2:
							 tot=s.Sum();
							 cout<<"\n\n\t\t The Sum Of All Prices Is "<<tot;
							 break;
							case 3:
							 s.Display();
							 break;
							case 4:
							 exit(0);
							default:
							  cout<<"\n\t\t Wrong Choice. Try Again!!";
							  goto again;
						 }
					 cout<<"\n\n\t\t Do You Want To Continue(Y/N) : ";
					 cin>>cont;
					 clrscr();
						 }while(cont=='Y' || cont=='y');
			 }


