//PROGRAM - 90
/*WAF that takes character argument and print it number of times equal to number
 of times that function has been called.     */

#include<iostream.h>
int chararg(char a)
{
  char ch;
  do
  {
    cout<<"\n Enter The Character As A Argument : ";
	 cin>>a;
	 cout<<"\n Do You Want To Call The Function ? (y/n) :";
	 cin>>ch;
  }while(ch=='Y' || ch=='y');
return ch;
}

void main()
{
  int x;
  char b;
  x=chararg(b);
}
