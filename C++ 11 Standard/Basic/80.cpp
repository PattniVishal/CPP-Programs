//PROGRAM - 80
//WAP to check whether the string is palindrome or not.

#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
  char str[80],c;
  int i,j,flag=1,len=0;
  cout<<"\n Enter The String : ";
  gets(str);
	 for(i=0;str[i]!='\0';i++)
		{
		 len++;
		}
	 for(i=0,j=(len-1);i<(len);i++,j--)
		{
		  cout<<str[j];

		  if(str[i]!=str[j])
			{
			 flag=0;
			}
		}
	 if(flag==1)
		cout<<"\n It Is A Palindrome..";
	 else
		cout<<"\n Not A Palindrome..";
}