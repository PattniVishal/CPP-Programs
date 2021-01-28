//WAP to print following sreies.
/*  1
	 2 3
	 4 5 6
	 7 8 9 10 */
#include<iostream.h>
void main()
{
 int row,i,j,no=1;
 cout<<"\n Enter Number Of Rows : ";
 cin>>row;
  for(i=1;i<=row;i++)
	{
	 for(j=1;j<=i;j++)
	  {
		cout<<no<<" ";
		no=no+1;
	  }
	  cout<<endl;
	}
}