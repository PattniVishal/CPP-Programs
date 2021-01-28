//Program to enter a number and print its factor.
#include<iostream.h>
void main()
{
 int i,n;
 cout<<"\n Enter The Number To Find Its Factor : ";
 cin>>n;
	for(i=1;i<=n;i++)
	 {
		if(n%i==0)
		 cout<<"\n Factors Of "<<n<<" : "<<i;
	 }
}