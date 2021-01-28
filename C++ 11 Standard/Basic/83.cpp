//PROGRAM - 83
//Design UDF to find largest number from 3 integers and call it in void main.

#include<iostream.h>
void findlar(int a,int b,int c)
{
  if((a>b) && (a>c))
	{
	 cout<<"\n The Largest Number Is : "<<a;
	}
  if((b>a) && (b>c))
	{
	 cout<<"\n The Largest Number Is : "<<b;
	}
  if((c>a) && (c>b))
	{
	 cout<<"\n The Largest Number Is : "<<c;
	}
}

void main()
{
  int x,y,z;
  cout<<"\n Enter Number 1: ";
  cin>>x;
  cout<<"\n Enter Number 2: ";
  cin>>y;
  cout<<"\n Enter Number 3: ";
  cin>>z;
  findlar(x,y,z);
}
