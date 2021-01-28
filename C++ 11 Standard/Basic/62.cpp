//WAP to print the following series and find its sum.
//1+(1/3)+(1/5)+(1/7)+......+N

#include<iostream.h>
void main()
{
 int n;
 float sum=1,i,term,k=3;
 cout<<"\n Enter The Number Of Terms : ";
 cin>>n;
  for(i=1;i<n;i++)
	  {
		term=1/k;
		sum+=term;
		k+=2;
	  }
	cout<<"\n The Sum Is : "<<sum;
}