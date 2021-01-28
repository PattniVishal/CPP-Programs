//PROGRAM - 106
//Program to replace every space in a string by hyphen (-).

#include<iostream.h>
#include<stdio.h>
void main()
{
  char str[100];
  cout<<"\n Enter The String : ";
  gets(str);
  cout<<"\n The New String Is : ";
	 for(int i=0;str[i]!='\0';i++)
		{
		  if(str[i]==' ')
			  cout<<" - ";
		  else
			  cout<<str[i];
		}
}
