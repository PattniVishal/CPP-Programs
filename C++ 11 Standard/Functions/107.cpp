//PROGRAM - 107
//Program to convert a string to proper case, i.e, to capitalise first word of the string.

#include<iostream.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
  char str[100];
  cout<<"\n Enter The String : ";
  gets(str);
  cout<<"\n New String Is : ";
	 for(int j=0;str[j]!='\0';j++)
		{
		  str[j]=char(tolower(str[j]));
		}
	 for(int i=0;str[i]!='\0';i++)
		{
		  if(i==0)
			 cout<<char(toupper(str[i]));
		  else if(str[i-1]==' ')
			 cout<<char(toupper(str[i]));
		  else
			 cout<<str[i];
		}
}
