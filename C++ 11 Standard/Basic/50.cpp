//WAP to print following sreies.
/*  *
	 * *
	 * * *
    * * * *
	 * * * * */
#include<iostream.h>
void main()
{
 int row,i,j;
 cout<<"\n Enter Number Of Rows : ";
 cin>>row;
  for(i=1;i<=row;i++)
	{
	 for(j=1;j<=i;j++)
	  {
		cout<<"* ";
	  }
	  cout<<endl;
	}
}