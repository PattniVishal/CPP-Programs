//PROGRAM - 93
/* WAF that compares 2 strings and return 0 if two strings are equal and -1
	if they are not equal.   */

#include<iostream.h>
#include<string.h>
#include<stdio.h>
int check(char str1[],char str2[])
{
  int ans;
	if(strcmp(str1,str2)==0)
	 ans=0;
	else
	 ans=-1;
  return ans;
}

void main()
{
  char str1[20],str2[20];
  int ans;
  cout<<"\n Enter String 1 : ";
  gets(str1);
  cout<<"\n Enter String 2 : ";
  gets(str2);
  ans=check(str1,str2);
  cout<<"\n Returning Value : "<<ans;
}
