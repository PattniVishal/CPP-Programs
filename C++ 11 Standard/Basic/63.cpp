//WAP to print the following series and find its sum.
//1 + (x) + (x^2) + (x^3) + (x^4) +......+N

#include<iostream.h>
#include<math.h>
void main()
{
  int i,n,x,term,sum=1;
  cout<<"\n Enter The Number Of Terms : ";
  cin>>n;
  cout<<"\n Enter The Value Of 'x' : ";
  cin>>x;
	 for(i=1;i<n;i++)
	  {
		term=pow(x,i);
		sum+=term;
	  }
  cout<<"\n The Sum Is : "<<sum;
}

