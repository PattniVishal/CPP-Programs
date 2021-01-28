//Program to print Fibonacci Series......0 1 1 2 3 5 8 13 21....
#include<iostream.h>
void main()
{
int i,n,a=0,b=1,c;
cout<<"\n Enter The Limit Of Fibonacci Series : ";
cin>>n;
cout<<a<<"  "<<b;
  for(i=2;i<=n;i++)
	 {
	  c=a+b;
	  cout<<"  "<<c;
	  a=b;
	  b=c;
	 }
}
