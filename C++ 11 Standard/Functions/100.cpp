//PROGRAM - 100
// Create a user define function to reverse a particular string.

#include<iostream.h>
#include<stdio.h>
#include<string.h>
void revstr(char s[])
{
  cout<<"\n Reverse String Is : ";
	for(int i=0;i<strlen(s);i++)
	 {
	  for(int j=i;s[j]!=' ';j++)
		{
		 if(s[j]=='\0')
		  {
			break;
		  }
		}
	  for(int k=i;s[k]!=' ';k++)
		{
		 if(s[k]=='\0')
		 {
		  break;
       }
		  j--;
		  cout<<s[j];
		  i++;
		}
	  if(s[k]==' ')
		cout<<" ";
	 }
}

void main()
{
  char str[100];
  cout<<"\n Enter The String : ";
  gets(str);
  revstr(str);
}
