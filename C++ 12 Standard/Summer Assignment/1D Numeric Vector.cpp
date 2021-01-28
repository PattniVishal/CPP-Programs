/*     _+--------------------------------------------+ _
		/o)|                  Pattni                   |(o\
	  / / |                  Vishal                   | \ \
	 ( (_ |  _                 J.                  _  | _) )
	((\ \)+-/o)-----------------------------------(o\-+(/ /))
	(\\\ \_/ /                                     \ \_/ ///)
	 \      /                                       \      /
	  \____/                                         \____/            */
// S U M M E R  A S S I G N M E N T  -- 3
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

/* Write a class to represent a vector(1-D numeric array). Include
	 => for vector creation
	 => for modification of a given element
	 => for displaying the largest value in the vector
	 => for displaying the entire vector
	 => write a program using this class                    */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>

class VECTOR
	  {
		 private:
		  int no;
		  int enter[50];
		  int mod;
		  int rep[50];

		 public:
		  void Create()
			{
			 int i;
			 cout<<"\n\n\t How Many Elements You Need For 1-D Numeric Vector : ";
			 cin>>no;
			  for(i=1;i<=no;i++)
				{
				 cout<<"\t Enter Element "<<i<<" : ";
				 cin>>enter[i];
				}
			 clrscr();
			 cout<<"\n\t ...Your Entered Vector Is..."<<endl;
			 cout<<"\t";
			  for(i=1;i<=no;i++)
				{
				 cout<<enter[i]<<"   ";
				}
		  }
		 void Modify()
			{
			 clrscr();
			 int i,flag=0;
			 cout<<"\n\n\t ...Your Entered Vector Is..."<<endl;
			 cout<<"\t";
			  for(i=1;i<=no;i++)
				{
				 cout<<enter[i]<<"   ";
				}
			 check:
			 cout<<"\n\n\t Which Value You Want To Modify ? Enter The Value : ";
			 cin>>mod;
			  for(i=1;i<=no;i++)
				{
				 if(mod==enter[i])
				  {
					cout<<"\n\t Enter The Value You Want To Replace : ";
					cin>>rep[i];
					enter[i]=rep[i];
					flag=1;
				  }
				}
				clrscr();
				 if(!flag)
				  {
					cout<<"\n\t This Element Does Not Exist...";
					cout<<"\n\t Try Entering The Other One..";
					goto check;
				  }
			 cout<<"\n\n\t ...The Modified 1-D Numeric Vector Is..."<<endl;
			 cout<<"\t";
			  for(i=1;i<=no;i++)
				{
				 cout<<enter[i]<<"   ";
				}
			}
		 void Largest()
			{
			  clrscr();
			  int i;
			  int lar=0;
			  cout<<"\n\n\t ...Your Entered Vector Is..."<<endl;
			  cout<<"\t";
				 for(i=1;i<=no;i++)
				  {
					cout<<enter[i]<<"   ";
				  }
			  for(i=1;i<=no;i++)
				{
				 if(enter[i]>lar)
					lar=enter[i];
				}
			cout<<"\n\n\t The Largest Element In The 1-D Numeric Vector Is.."<<lar;
		 }
		 void Display()
			{
			  clrscr();
			  int i;
			  cout<<"\n\t ...Your Entered Vector Is..."<<endl;
			  cout<<"\t";
				for(i=1;i<=no;i++)
				 {
				  cout<<enter[i]<<"   ";
				 }
			}
	  }v;
	  void main()
		 {
			int ch;
			char cont;
			cout<<"\n\t\t ----------------------------------------------------";
			cout<<"\n\t\t |     ~~~~~        W-E-L-C-O-M-E        ~~~~~      |";
			cout<<"\n\t\t |         THE 1-D NUMERIC VECTOR PROGRAM           |";
			cout<<"\n\t\t ----------------------------------------------------";
			v.Create();
		 do
		  {
			again:
			cout<<"\n\n\t What Would You Like To Do With Your Vector ? ";
			cout<<"\n\t ------   Main Menu   ------";
			  cout<<"\n\t 1.  Modify The 1-D Numeric Vector."
					<<"\n\t 2.  Display The Largest Element Of 1-D Numeric Vector."
					<<"\n\t 3.  Display The Entire 1-D Numeric Vector."
					<<"\n\t 4.  Exit.";
			  cout<<"\n\t Please Choose Any One Of The Option ?(1-4) : ";
			  cin>>ch;
				switch(ch)
				 {
				  case 1:
					v.Modify();
					break;
				  case 2:
					v.Largest();
					break;
				  case 3:
					v.Display();
					break;
				  case 4:
					cout<<"\n\t Exiting ......";
					cout<<"\n\t --- THANK YOU ---";
					exit(0);
					break;
				  default:
					cout<<"\n\t Wrong Choice.. Try Again !!";
					goto again;
				 }
			  cout<<"\n\n\t Do You Want To Continue (Y/N) ? : ";
			  cin>>cont;
		  }while(cont=='y' || cont=='Y');
		  cout<<"\n\t Exiting ......";
		  cout<<"\n\t --- THANK YOU ---";
		 }
