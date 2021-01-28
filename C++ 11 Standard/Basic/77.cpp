//PROGRAM - 77
// WAP to input string. If it is lowercase convert to uppercase and vice versa.

#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
	char str[50];
	int ch,i;
	cout<<"\n Enter The String : ";
	gets(str);
	cout<<"\n **********String Conversion Menu**********";
	cout<<"\n 1. Convert Uppercase to Lowercase.."
		 <<"\n 2. Convert Lowercase to Uppercase.."
		 <<"\n Please Enter Your Choice :  ";
	cin>>ch;
	switch(ch)
	  {
		case 1:
		  {
			  for(i=0;i<strlen(str);i++)
				{
				  cout<<char(tolower(str[i]));
				}
				break;
		  }
		case 2:
		  {
			 for(i=0;i<strlen(str);i++)
				{
				  cout<<char(toupper(str[i]));
				}
				break;
		 }
	  default:
		  {
			 cout<<"\n Invalid Choice !..";
			 break;
		  }
	 }
}

