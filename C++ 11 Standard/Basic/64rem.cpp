//WAP to print the following series and find its sum.
//1 + (1+2) + (1+2+3) + (1+2+3+4) + (1+2+3+4+5) +......+N

#include<iostream.h>
#include<math.h>
void main()
{
  int i,n,x,k=3,term,sum=1;
  cout<<"\n Enter The Number Of Terms : ";
  cin>>n;
	 for(i=1;i<n;i++)
	  {
		term=k;
		sum+=term;
		k++;
	  }
  cout<<"\n The Sum Is : "<<sum;
}