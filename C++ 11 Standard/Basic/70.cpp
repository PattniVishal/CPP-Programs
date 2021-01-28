//WAP to print the following series and find its sum.
//(x^3/3!) - (x^5/5!) + (x^7/7!)+......+N

#include<iostream.h>
#include<math.h>
void main()
{
  int n,x,i,j,k=3;
  float sum=0,term,fact;
  cout<<"\n Enter The Number Of Terms : ";
  cin>>n;
  cout<<"\n Enter The Value Of 'x' : ";
  cin>>x;
	 for(i=1;i<=n;i++)
	  {
		fact=1;
		 for(j=k;j>=1;j--)
		  {
			fact*=j;
		  }
			 if(i%2!=0)
			  {
				term=pow(x,k)/fact;
				sum+=term;
			  }
			 else
			  {
				term=pow(x,k)/fact;
				sum-=term;
			  }
		k+=2;
	  }
  cout<<"\n The Sum Is : "<<sum;
}