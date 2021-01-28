/*  WAP to do following
	(i) read integer 'x'
	(ii) calculate the number of digits 'n' in variable 'x'
	(iii) form an integer 'y' that has number of digits 'n' at ten's place and the most significant digit at one's place
	(iv) output 'y'.   */
#include<iostream.h>
void main()
{
 int i,r,n,count=0;
 cout<<"\n Enter Any Number : ";
 cin>>n;
  for(i=1;n!=0;i++)
	{
	 r=n%10;
    n=n/10;
	 count=count++;
	}
 cout<<"\n Most Significant Digit Is "<<r;
 cout<<"\n Number Of Digits Is "<<count;
 cout<<"\n Output Is "<<r<<count;
}