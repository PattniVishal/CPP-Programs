//PROGRAM - 71
// WAP to check whether the given character is alphanumeric or digit.

#include<iostream.h>
#include<ctype.h>
void main()
{
 char ch;
 cout<<"\n Enter Any Character From Keyboard : ";
 cin>>ch;
	if(isalnum(ch))
	  cout<<"\n It Is Alphanumeric. ";
	if(isdigit(ch))
	  cout<<"\n It Is Digit. ";
}





