//PROGRAM - 109
//Concate two strings without using string function.

#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
  char a[50],b[50],c[110];
  cout<<"\n Enter String 1 : ";
  gets(a);
  cout<<"\n Enter String 2 : ";
  gets(b);
	 for(int i=0;a[i]!='\0';i++)
		c[i]=a[i];
	 for(int k=0;b[k]!='\0';k++)
		c[i+k]=b[k];
	 c[i+k]='\0';
  cout<<"\n Concated String Is : "<<c;
}
