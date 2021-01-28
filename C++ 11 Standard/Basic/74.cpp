//PROGRAM - 74
//WAP that reads two string and appends the first string to the second.

#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
  char str1[20],str2[60];
  cout<<"\n Enter String 1 : ";
  gets(str1);
  cout<<"\n Enter String 2 : ";
  gets(str2);
  strcat(str2,str1);
  cout<<"\n String 1 Is Appended To String 2 : "<<str2;
}