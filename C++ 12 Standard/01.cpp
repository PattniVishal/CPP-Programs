//PROGRAM - 1
//Define a class STUDENT which takes details and show result.

#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class STUDENT
			  {
				 private:
					int roll,std;
					float p,c,m;
					float per;
					float tot;
					char grade;
					void Cal_Res()
					  {
						 tot=p+c+m;
						 per=(tot/300)*100;
							if(per>90 && per<=100)
							  grade='A';
							else if(per>50 && per<=90)
							  grade='B';
							else
							  grade='C';
					  }
				 public:
					char name[40];
					void Getinfo()
					  {
						 cout<<"\n\n\t Enter Your Name : ";
						 gets(name);
						 cout<<"\n\t Enter Your Class : ";
						 cin>>std;
						 cout<<"\n\t Enter Your Roll Number : ";
						 cin>>roll;
						 cout<<"\n\t Enter Your Marks In Physics(Out Of 100) : ";
						 cin>>p;
						 cout<<"\n\t Enter Your Marks In Chemistry(Out Of 100) : ";
						 cin>>c;
						 cout<<"\n\t Enter Your Marks In Maths(Out Of 100) : ";
						 cin>>m;
						 clrscr();
					  }
					void Display()
					  {
						 cout<<"\n\n\t *****  Please Check Your Result  *****";
						 cout<<"\n\t   Name : "<<name;
						 cout<<"\n\t   Class : "<<std;
						 cout<<"\n\t   Roll Number : "<<roll;
						 Cal_Res();
						 cout<<"\n\t   Total Marks : "<<tot;
						 cout<<"\n\t   Percentage : "<<per;
						 cout<<"\n\t   You Got "<<grade<<" Grade.";
						 cout<<"\n\n\t\t   **********  T H A N K  Y O U  **********";
						 cout<<"\n\t\t  *****  SWAMINARAYAN H.V. VIDYALAYA  *****";
					  }
				 }s;
				 void main()
					{
					 clrscr();
					  cout<<"\n\n\t\t    **********  W E L C O M E  **********";
					  cout<<"\n\t\t*******  SWAMINARAYAN H.V. VIDYALAYA  *******";
					  s.Getinfo();
					  s.Display();
					}

