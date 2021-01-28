//Enter any number 'n' and display all numbers upto the 'n' and also print sum of them.
#include<iostream.h>
void main()
{
 int i,n,sum=0;
 cout<<"\n Enter Any Number : ";
 cin>>n;
 for(i=1;i<=n;i++)
	{
	 cout<<i<<endl;
	 sum=sum+i;
	}
cout<<"\n Their Sum = "<<sum;
}