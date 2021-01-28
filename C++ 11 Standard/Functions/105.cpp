//PROGRAM - 105
//Check whether the string is palindrome or not.

#include<iostream.h>
#include<stdio.h>
#include<string.h>
void main()
{
  char str[100];
  int i,j,len,flag=0;
  cout<<"\n Enter The String : ";
  gets(str);
  len=strlen(str);
	for(i=0,j=len-1;i<len/2;i++,j--)
	  {
		 if(str[i]!=str[j])
			{
			  flag=1;
			  break;
			}
	  }
	  if(flag==0)
		 cout<<"\n It Is A Palindrome..";
	  else
		 cout<<"\n It Is Not A Palindrome..";
}
