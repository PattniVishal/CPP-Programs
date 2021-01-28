//WAP to accept 10 numbers and print total numbers of +ve and -ve numbers.
#include<iostream.h>
void main()
{
int i,cp=0,cn=0,z=0,n;
  for(i=1;i<=10;i++)
	{
	 cout<<"\n Enter Number "<<i<<" : ";
	 cin>>n;
	  if(n>0)
		cp=cp++;
	  if(n<0)
		cn=cn++;
	  if(n==0)
		z=z++;
	}
cout<<"\n Total Numbers Of Positive Numbers = "<<cp;
cout<<"\n Total Numbers Of Negative Numbers = "<<cn;
cout<<"\n Total Numbers Of Zeroes = "<<z;
}
