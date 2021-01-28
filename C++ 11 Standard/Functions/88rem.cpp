//PROGRAM - 88
//WAF that calculates number of characters entered by user in a given string.

#include<iostream.h>
#include<stdio.h>
void wordcheck(char str[])
 {
  int a,b=0;
  for(int i=0;str[i]!='\0';i++)
	{
	 if(str[i]!=' ')
	  {
		b++;
	  }
	}
  cout<<"\n There Are "<<b<<" Letters In The String.";
 }

void main()
 {
  char str1[100];
  cout<<"\n Enter The String : ";
  gets(str1);
  wordcheck(str1);
 }
