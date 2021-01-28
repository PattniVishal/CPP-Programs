//PROGRAM - 75
/*WAP that reads the password and print OK if correct password is entered, otherwise print SORRY.
  Give 3 attempts to the user.  */

#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
	char string[15],pass[]="Vishal";
	int i=2;
	do
	{
		cout<<"\n\n\n Enter The Password To Login : ";
		gets(string);
		if((strcmp(pass,string))==0)
			{
//				cout<<"\n OK..";
				cout<<"\n You Entered Correct Password"
					 <<"\n Logging In......";
				break;
			}
		else
			{
//				cout<<"\n SORRY ";
				cout<<"\n Sorry The Password Is Incorrect ! ";
				cout<<"\n"<<i<<" Attempts Left.";
				cout<<"\n ---------------------------------------------------";
			   i--;
			}
	} while(i>=0);
}

