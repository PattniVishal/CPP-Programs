/*     _ +-------------------------------------------+ _
		/o)|                  Pattni                   |(o\
	  / / |                  Vishal                   | \ \
	 ( (_ |  _                 J.                  _  | _) )
	((\ \)+-/o)-----------------------------------(o\-+(/ /))
	(\\\ \_/ /                                     \ \_/ ///)
	 \      /                                       \      /
	  \____/                                         \____/            */
// S U M M E R  A S S I G N M E N T  -- 5
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

/* Write a C++ program to perform varios operations on a string class
  without using language supported built-in string functions. The
  operations on a class are:
	(a) Read a string
	(b) Display a string
	(c) Reverse a string
	(d) Copy the string into an empty string
	(e) Concatenate two string                 */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>

class STRING
	{
	  private:
		 char str[30];
		 char str1[30];
		 char str2[30];

	  public:
//		 char str1[30],str2[30],str[30];

		 void Read()
		  {
			int i;
			clrscr();
			cout<<"\n\n\t Reading The String..";
			cout<<"\n\n\t Enter Your String : ";
			gets(str);
		  }
		 void Display()
		  {
			int i;
			clrscr();
			cout<<"\n\n\t Displaying The String..";
			cout<<"\n\n\t Enter Your String : ";
			gets(str);
			cout<<"\n\t Your Entered String Is : ";
			  for(i=0;str[i]!='\0';i++)
				  cout<<str[i];
		  }
		 void Reverse()
		  {
			int i,j=0,len;
			clrscr();
			cout<<"\n\n\t Reversing The String..";
			cout<<"\n\n\t Enter Your String : ";
			gets(str1);
			cout<<"\n\t Your Entered String Is : "<<str1;
			len=strlen(str1);
			for(i=len-1,j=0;i>=0,j<=len-1;i--,j++)
			 {
				str2[j]=str1[i];
			 }
			 str2[j]='\0';
			 cout<<"\n\t Your Reversed String Is : "<<str2;
		  }
		 void Copy()
		  {
			int i;
			clrscr();
			cout<<"\n\n\t Copying The String Into Empty String..";
			cout<<"\n\n\t Enter Your String 1 : ";
			gets(str1);
			cout<<"\n\t String 2 Is The Empty String .. ";
			for(i=0;i<=strlen(str1);i++)
			 {
				str2[i]=str1[i];
			 }
			 str2[i]='\0';
			cout<<"\n\n\t Your Copied String Is : ";
			  for(i=0;str2[i]!='\0';i++)
				  cout<<str2[i];
		  }
		 void Concatenate()
		  {
			int i,len,j;
			clrscr();
			cout<<"\n\n\t Concatenating The String..";
			cout<<"\n\n\t Enter Your String 1 : ";
			gets(str1);
			cout<<"\n\t Enter Your String 2 : ";
			gets(str2);
			len=strlen(str1);
			for(i=0;str2[i]!='\0';i++)
			 {
				str1[len+i]=str2[i];
			 }
			 cout<<"\n\t Your Concatenated String Is : "<<str1;
		  }
	}s;
void main()
  {
	 clrscr();
	  int ch;
	 cout<<"\n\t     ***   W   E   L   C   O   M   E   ***   ";
	 cout<<"\n\t *-*-*-*-*-*-* _______ _______ *-*-*-*-*-*-*";
	 cout<<"\n\t |                                         |";
	 cout<<"\n\t |      STRING                             |";
	 cout<<"\n\t |               MANAGEMENT                |";
	 cout<<"\n\t |                            PROGRAM      |";
	 cout<<"\n\t |                                         |";
	 cout<<"\n\t *-*-*-*-*-*-* _______ _______ *-*-*-*-*-*-*";
	 again:
	 cout<<"\n\n\t ------     Main Menu     ------";
	 cout<<"\n\t 1. Read The String..";
	 cout<<"\n\t 2. Display The String..";
	 cout<<"\n\t 3. Reverse The String..";
	 cout<<"\n\t 4. Copy The String Into Empty String..";
	 cout<<"\n\t 5. Concatenate The String..";
	 cout<<"\n\t 6. Exit..";
	 cout<<"\n\t Enter Your Choice .. (1-6) : ";
	 cin>>ch;
	 switch(ch)
		{
		  case 1:
			 s.Read();
			 goto again;
			 break;
		  case 2:
			 s.Display();
			 goto again;
			 break;
		  case 3:
			 s.Reverse();
			 goto again;
			 break;
		  case 4:
			 s.Copy();
			 goto again;
			 break;
		  case 5:
			 s.Concatenate();
			 goto again;
			 break;
		  case 6:
			 exit(0);
			 break;
		  default:
			 cout<<"\n\t Please Enter Valid Choice ..";
			 goto again;
			 break;
		}
  }
