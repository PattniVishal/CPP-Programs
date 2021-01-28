//PROGRAM -- 05
/* Define a class ADMISSION in C++ with following details..
 => Private members:
	AD_NO  integer(range 10-200)
	NAME   array of characters(string)
	CLASS  character
	FEES   float
 => Public members:
	Functions Read_Data(), Display()
	Function Draw_Nos() to choose 2 students randomly and display the details.
		Use random to generate admission nos to match with AD_NO.    */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

class ADMISSION
		 {
			private:
			  int ad_no;
			  char name[40];
			  int std;
			  float fees;
				void Cal_Fees()
				 {
					fees=8000+(std*1000);
				 }
			public:
			  void Read_Data()
				 {
					cout<<"\n\n\t Enter The Admission Number : ";
					cin>>ad_no;
					cout<<"\n\t Enter The Name Of The Student : ";
					gets(name);
					cout<<"\n\t In Which Class You Want Admission : ";
					cin>>std;
				 }
			  void Display()
				 {
					cout<<"\n\n\t Please Check The Below Details...";
					cout<<"\n\t Admission Number : "<<ad_no;
					cout<<"\n\t Your Name : "<<name;
					cout<<"\n\t Class : "<<std;
					Cal_Fees();
					cout<<"\n\t Fees For Class "<<std<<" Is Rs. "<<fees;
				 }
			  int Draw_Nos()
				 {
					int a,b;
					randomize();
					a=random(5)+1;
					b=random(5)+1;
					return a;
					return b;
				 }
			  int Getad()
				 {
					return ad_no;
				 }
		 }a[3];
		 void main()
			{
			 int i,flag=0;
			  cout<<"\n\n\t\t********* W E L C O M E ***********";
			  cout<<"\n\t\t--- Admission Session 2014-2015 ---";
				for(i=0;i<3;i++)
				 {
				  cout<<"\n\n\t ==> Enter Details Of Student "<<i+1;
				  a[i].Read_Data();
				 }
			  cout<<"\n\n\t Only 2 Seats Left !!!";
			  cout<<"\n\t Let's Do The Lucky Draw !!!";
				for(i=0;i<3;i++)
				 {
					if(a[i].Draw_Nos()==a[i].Getad())
					 {
					  cout<<"\n\n\t Congratulations!! You Got Admission..";
					  a[i].Display();
					  flag=1;
					  cout<<"\n\n\t\t ---------------------------------";
					  cout<<"\n\t\t            THANK YOU";
                 cout<<"\n\t\t ---------------------------------";  
					 }
				 }
				 if(!flag)
				  {
					cout<<"\n\n\t Not Lucky Today !!!";
					cout<<"\n\t Better Luck Next Time..";
				  }
			}



