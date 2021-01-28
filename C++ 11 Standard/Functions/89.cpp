//PROGRAM - 89
/*Design a function which accepts string and one character as argument and check
 whether the character is present, if present find its position.     */

#include<iostream.h>
#include<string.h>
#include<stdio.h>
int pos(char str[],char a)
{
  int count=0,flag=1;
  for(int i=0;str[i]!='\0';i++)
	{
	 if(str[i]==a)
	  {
		flag=0;
		count++;
		cout<<"\n The Word Is Present At "<<i+1;
	  }
	}
  return count;
}

void main()
{
  char str1[50],b;
  int x,y=0;
  cout<<"\n Enter The String : ";
  gets(str1);
  cout<<"\n Enter The Word : ";
  cin>>b;
  x=pos(str1,b);
  cout<<"\n The Letter Is Present "<<x<<" Times..";
}

