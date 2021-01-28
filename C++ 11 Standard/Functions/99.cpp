//PROGRAM - 99
/* WAP that uses function small0() (that is passed 2 integers argument by value)
  to receive reference of the smaller value. Then using this reference the smaller
  value is set to 0. Write a main() to exercise this function.    */

#include<iostream.h>
int small0(int &a,int &b)
{
  if(b<a)
  {
	 b=0;
	 return b;
  }
  else
  {
	 a=0;
	 return a;
  }
}
void main()
{
  int x,y,z;
  cout<<"\n Enter Number 1 : ";
  cin>>x;
  cout<<"\n Enter Number 2 : ";
  cin>>y;
  z=small0(x,y);
  cout<<"\n Now Number 1 Is : "<<x;
  cout<<"\n Now Number 2 Is : "<<y;
}
