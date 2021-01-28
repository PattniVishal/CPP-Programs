//PROGRAM - 3
/* Program to hold details of 3 students and provide the
  facility of viewing details of the topper as well as
  specific students by providing his/her roll number.   */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>

class STUDENT
			{
			  private:
				 int roll;
				 char name[40];
				 float per;
				 char grade;
			  public:
				 void Getinfo()
					{
					  cout<<"\n\n\t Enter The Roll Number Of Students : ";
					  cin>>roll;
					  cout<<"\n\t Enter The Name Of The Student : ";
					  gets(name);
					  cout<<"\n\t Enter The Percentage Got In Exam : ";
					  cin>>per;
					}
				 void Display()
					{
					  cout<<"\n\n\t ---- Please Check The Following Details.";
					  cout<<"\n\t Name : "<<name;
					  cout<<"\n\t Percentage : "<<per;
					  Cal_Grade();
					  cout<<"\n\t Grade : "<<grade;
					}
				 int GetRno()
					{
					  return roll;
					}
				 int GetMarks()
					{
					  return per;
					}
				 void Cal_Grade()
					{
					  if(per>75 && per<=100)
						 grade='A';
					  else if(per>35 && per<=75)
						 grade='B';
					  else
						 grade='C';
					}
			}s[3];
			void main()
			  {
				cout<<"\n\n\t\t   ***********  W E L C O M E  ***********";
				cout<<"\n\t\t***** SHRI SWAMINARAYAN H.V. VIDYALAYA *****";
				cout<<"\n\t\t--------------------------------------------";
				 int i,pos,max_mark=0,rno,ch;
				 char cont;
				  for(i=0;i<3;i++)
					{
					  cout<<"\n\n\t *****  Enter Details Of Student "<<i+1<<" *****";
					  s[i].Getinfo();
					}
				 do
				  {
					 clrscr();
					 once_more:
					 cout<<"\n\n\t ---- Main Menu ----";
					 cout<<"\n\t 1. Topper's Details.";
					 cout<<"\n\t 2. Specific Students's Details.";
					 cout<<"\n\t 3. All Students's Details.";
					 cout<<"\n\t 4. Exit.";
					 cout<<"\n\t Enter Your Choice..... ";
					 cin>>ch;
					switch(ch)
					  {
						 case 1:
							 for(i=0;i<3;i++)
							  {
								if(s[i].GetMarks()>max_mark)
								 {
								  pos=i;
								  max_mark=s[i].GetMarks();
								 }
							  }
							 cout<<"\n\t Topper Of The Class Is..";
							 s[pos].Display();
							 break;

						 case 2:
							 again:
							 cout<<"\n\n\t Enter The Roll Number You Want : ";
							 cin>>rno;
							 for(i=0;i<3;i++)
							  {
								if(s[i].GetRno()==rno)
								 {
								  s[i].Display();
								  break;
								 }
							  }
								if(i==3)
								 {
								  cout<<"\n\t Roll Number Not Found !!";
								  goto again;
								 }
								break;

						 case 3:
						  for(i=0;i<3;i++)
							{
							 cout<<"\n\n\t Student "<<i+1<<" :-";
							 s[i].Display();
							}
							break;

						 case 4:
							exit(0);

						 default:
							{
							 cout<<"\n\n\t You Entered Wrong Choice. Try Again!!";
							 goto once_more;
							}
					  }
					cout<<"\n\n\t Do You Want To Continue(Y/N) : ";
					cin>>cont;
					}while(cont=='Y' || cont=='y');
			  }



