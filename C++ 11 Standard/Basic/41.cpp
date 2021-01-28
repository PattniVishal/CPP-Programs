//WAP to print prime numbers from 1 - 100
#include<iostream.h>
void main()
{
 int i,n,j,k=0;
 cout<<"\n Prime Number From 1 to 100 are"<<endl;
	for(i=2;i<=100;i++)
	 {
	  for(j=1;j>=1;j++)
		{
		 if(i%j==0)
		  k++;
		}
		if(k==2)
		cout<<i<<endl;
		k=0;
	 }
}


