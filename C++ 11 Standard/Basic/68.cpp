//WAP to print the following series and find its sum.
//x + (x^2/2) + (x^3/3) + (x^4/4) +......+N

#include<iostream.h>
#include<math.h>
void main()
{
  int n,x,i,j;
  float sum=0,term;
  cout<<"\n Enter The Number Of Terms : ";
  cin>>n;
  cout<<"\n Enter The Value Of 'x' : ";
  cin>>x;
	 for(i=1;i<=n;i++)
	  {
		term=pow(x,i)/i;
		sum+=term;
	  }
  cout<<"\n The Sum Is : "<<sum;
}