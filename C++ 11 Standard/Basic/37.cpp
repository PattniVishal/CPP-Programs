//Program to print largest even and largest odd number from a list of numbers.
//When Zero(0) is input, program should be stopped accepting numbers.
#include<iostream.h>
void main()
{
 int n,lare=0,laro=1;
 cout<<"\n Enter Number : ";
	do{
	  cin>>n;
	  if(n%2==0)
		{
		 if(n>lare)
		  lare=n;
		}
	  else
	  if(n>laro)
		laro=n;
	  } while(n);
 cout<<"\n Largest Even Number = "<<lare;
 cout<<"\n Largest Odd Number = "<<laro;
}

