//PROGRAM - 76
//WAP to input two strings and copies smaller string to bigger string.

#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
	int x,y;
	char str1[100], str2[100];
	cout<<"\n Enter String 1 : ";
	gets(str1);
	cout<<"\n Enter String 2 : ";
	gets(str2);
	x=strlen(str1);
	y=strlen(str2);
	if(x>y)
	{
		strcpy(str1,str2);
		cout<<endl<<str1;
	}
	else if(y<x)
	{
		strcpy(str2,str1);
		cout<<endl<<str2;
	}
	else if(x==y)
	{
		strcat(str1,str2);
		cout<<endl<<str1;
	}
	else
		cout<<"\n Cannot Copy Bigger String To Smaller String !..";
}
