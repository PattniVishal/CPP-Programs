//WAP to print the following series and find its sum.
//1+(1/1)+(1/2)+(1/3)+......+N

#include<iostream.h>
void main()
{
 int n;
 float sum=1,i,term;
 cout<<"\n Enter The Number Of Terms : ";
 cin>>n;
  for(i=1;i<=n;i++)
	  {
		term=1/i;
		sum+=term;
	  }
	cout<<"\n The Sum Is : "<<sum;
}


