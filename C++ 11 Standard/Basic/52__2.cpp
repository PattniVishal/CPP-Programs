//WAP to print the following.
			 *
			* *
		  * * *
			* *
          *
#include<iostream.h>
#include<iomanip.h>
void main()
{
 int n,i,j,sp=40;
 cout<<"\n Enter Number Of Rows : ";
 cin>>n;
 cout<<setw(sp);
	for(i=1;i<=n;i++)
	 {
	  for(j=1;j<=i;j++)
		{
		 cout<<"* ";
		}
		cout<<"\n";
		sp--;
	  cout<<setw(sp);
	 }
	 sp++;
  for(i=(n-1);i>=1;i--)
	{
	 sp++;
	 cout<<setw(sp);
	  for(j=i;j>=1;j--)
		{
		 cout<<"* ";
		}
	  cout<<"\n";
	}
}
`