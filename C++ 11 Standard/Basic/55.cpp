//WAP to print following sreies.
/*     * * * * *
		  * * * *
			* * *
			 * *
			  *             */

#include<iostream.h>
#include<iomanip.h>
void main()
{
  int i,j,n,row;
  cout<<"\n Enter Number Of Rows  :  ";
  cin>>row;
  n=(2*row)-1;
	for(i=(row-1);i>=0;i--)
	  {
		cout<<setw(40-(2*i));
		 for(j=1;j<=n;j++)
		  {
			cout<<"* ";
		  }
		  cout<<endl;
		  n-=2;
		}
}
