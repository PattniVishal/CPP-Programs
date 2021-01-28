//WAP to print the following series and find its sum.
//(2/9) - (5/13) + (8/17) - (11/21) +......+N

#include<iostream.h>
void main()
{
int i,n;
float sum=0,deno=9,nume=2;
cout<<"\n Enter The Number Of Terms : ";
cin>>n;
 for(i=1;i<=n;i++)
	{
	  if(i%2!=0)
		{
		 sum+=(nume/deno);
		}
	  else
		{
		 sum-=(nume/deno);
		}
	nume+=3;
	deno+=4;
	}
cout<<"\n The Sum Is "<<sum;
}
