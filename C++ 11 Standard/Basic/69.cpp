//WAP to print the following series and find its sum.
//x - (x^2/2!) + (x^3/3!) - (x^4/4!) +......+N

#include<iostream.h>
#include<math.h>
void main()
{
  int n,x,i,j,deno=1;
  float sum=0,term,fact=1;
  cout<<"\n Enter The Number Of Terms : ";
  cin>>n;
  cout<<"\n Enter The Value Of 'x' : ";
  cin>>x;
	 for(i=1;i<=n;i++)
	  {
		 if(deno%2!=0)
		  {
			fact*=i;
			term=pow(x,i)/fact;
			sum+=term;
		  }
		 else
		  {
			fact*=i;
			term=pow(x,i)/fact;
			sum-=term;
		  }
	  deno++;
	  }
  cout<<"\n The Sum Is : "<<sum;
}