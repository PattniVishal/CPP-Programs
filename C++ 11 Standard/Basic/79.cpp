//PROGRAM - 79
//WAP to reverse a string.

#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
  char str[80],c;
  int i,j,len=0;
  cout<<"\n Enter The String : ";
  gets(str);
	 for(i=0;str[i]!='\0';i++)
		{
		 len++;
		}
	 for(i=0,j=(len-1);i<(len);i++,j--)
		{
		  cout<<str[j];
		}
}
