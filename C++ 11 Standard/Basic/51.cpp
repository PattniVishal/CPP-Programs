//WAP to print following sreies.
/*  A
	 A B
	 A B C
	 A B C D */
#include<iostream.h>
void main()
{
 int i,j,n;
 cout<<"\n Enter Number Of Rows : ";
 cin>>n;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
	cout<<char(64+j)<<" ";
  }
  cout<<endl;
 }
}