//WAP to accept a character and display whether it is uppercase or lowercase alphabet.(If we do not enter alphabet, then print appropriate message)
#include<iostream.h>
void main()
{
char ch;
cout<<"\n Enter Any Character : ";
cin>>ch;
if(ch>=65 && ch<=90)
  cout<<"\n You Entered Uppercase Alphabet. ";
else if(ch>=97 && ch<=122)
  cout<<"\n You Entered Lowercase Alphabet. ";
else
  cout<<"\n You Does Not Entered Alphabet. ";
}
