//Write a C++ program to enter a character from keyboard and display its associated ASCII codes.

#include<iostream.h>
void main()
{
char a;
int b;
cout<<"\n Enter Any Character From Keyboard : ";
cin>>a;
b=int(a);
cout<<"\n ASCII code for "<<a<<" Is: "<<b;
}