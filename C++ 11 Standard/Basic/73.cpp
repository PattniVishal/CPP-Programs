//PROGRAM - 73
//Enter a string and convert it to uppercase.

#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
 char str[50];
 int i;
 cout<<"\n Enter Any String  : ";
 gets(str);
  for(i=0;i<strlen(str);i++)     //or for(i=1;str[i]!='\0';i++)
  {
	 cout<<char(toupper(str[i]));
  }
}

