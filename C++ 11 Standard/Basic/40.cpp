//Enter any number and check whether it is prime or not.
#include<iostream.h>
#include<process.h>
void main()
{
 int i,n;
 cout<<"\n Enter Any Number : ";
 cin>>n;
 for(i=2;i<=n/2;i++)
  {
  if(n%i==0)
	{
	 cout<<"\n It Is Not A Prime.";
	 exit(0);
	}
  }
  cout<<"\n It Is A Prime Number.";
}