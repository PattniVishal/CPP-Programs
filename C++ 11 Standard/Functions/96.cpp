//PROGRAM - 96
/* WAP that uses the function power to raise a number n to power m. Function
  takes int value for m and n and returns the result correctly. Use default
  value of 2 for m to make the function calculate square, when these argument
  is omitted. Write a main to get the value of m and n from user and display result.  */

#include<iostream.h>
int power(int m,int n=2)
{
  int i,sqr=1;
  for(i=1;i<=n;i++)
	{
	 sqr*=m;
	}
  return sqr;
}

void main()
{
  int a,b,x;
  cout<<"\n Enter The Value Of 'n' : ";
  cin>>a;
  cout<<"\n Enter The Value Of 'm' : ";
  cin>>b;
  x=power(a);
  cout<<"\n "<<a<<" To The Power 2 Is = "<<x;
  x=power(a,b);
  cout<<"\n "<<a<<" To The Power "<<b<<" Is = "<<x;
}
