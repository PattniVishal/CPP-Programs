//Program to print odd numbers in descending order and first odd is given by user.
#include<iostream.h>
void main()
{
 int i,n;
 cout<<"\n Enter Any Odd Number : ";
 cin>>n;
 cout<<"\n Descending Order Of Odd Numbers Are "<<endl;
	for(i=n;i>=1;i--)
	  if(i%2!=0)
		 cout<<i<<endl;
}
