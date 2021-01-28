//PROGRAM  - 82
/*WAP to print following series
					 1
				  2 1 2
				3 2 1 2 3
			 4 3 2 1 2 3 4          */

#include<iostream.h>
#include<iomanip.h>
void main()
{
  int i,j,k,n,sp=40;
  cout<<"\n Enter The Number Of Lines : ";
  cin>>n;
	 for(i=1;i<=n;i++)
	  {
		 cout<<setw(sp);
		  for(j=i;j>=1;j--)
			{
			 cout<<j<<setw(2);
			}
		  for(k=2;k<=i;k++)
			{
			 cout<<k<<setw(2);
			}
		  cout<<endl;
		  sp-=2;
	 }
}
