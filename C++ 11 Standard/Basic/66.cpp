//WAP to print the following series and find its sum.
//1+(1/3!)+(1/5!)+(1/7!)+......+N

#include<iostream.h>
void main()
{
  int n,i,j,k=3;
  float sum=1,term,fact;
  cout<<"\n Enter The Number Of Terms : ";
  cin>>n;
	 for(i=1;i<=n;i++)
	  {
		fact=1;
		 for(j=k;j>=1;j--)
		  {
			fact*=j;
		  }
		term=1/fact;
		sum+=term;
		k+=2;
	  }
  cout<<"\n The Sum Is : "<<sum;
}



