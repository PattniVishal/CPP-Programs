//Program to calculate and print the sum of even and odd integers upto first 'n' natural numbers.
#include<iostream.h>
void main()
{
int i,n,sumo=0,sume=0;
cout<<"\n Enter The Number Upto Which You Want : ";
cin>>n;
  for(i=1;i<=n;i++)
	 {
	  cout<<i<<endl;
		if(i%2==0)
		 sume+=i;
		else
		 sumo+=i;
	 }
 cout<<"\n Sum Of Even Numbers = "<<sume;
 cout<<"\n Sum Of Odd Numbers = "<<sumo;
}
