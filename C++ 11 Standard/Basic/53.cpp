//WAP to print following sreies.
/*            &
				&   &
			 &       &
		  &           &
		& & & & & & & & &    */

#include<iostream.h>
#include<iomanip.h>
void main()
{
int i,j,k;
cout<<setw(11)<<"&"<<endl;
  for(i=8,j=3;i>=0,j<=19;i-=2,j+=4)
	{
	  for(k=1;k<=i;k++)
		{
		 cout<<" ";
		}
		 cout<<"&";
	  for(k=1;k<=j;k++)
		{
		 cout<<" ";
		}
		 cout<<"&";
		 cout<<endl;
	}
  for(i=1;i<=11;i++)
	{
	 cout<<"& ";
	}
}