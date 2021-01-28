//PROGRAM - 124
/* Input 1-D array and convert it into 2-D like following style. Define function for it.
	1 2 3 4 5 6
	1 2 3 4 5 0
	1 2 3 4 0 0
	1 2 3 0 0 0
	1 2 0 0 0 0
	1 0 0 0 0 0         */

#include<iostream.h>
void style(int a[100],int size)
{
  int i,j,b[10][10],c[10][10];
  for(i=0;i<size-1;i++)
	{
	 for(j=0;j<size-1;j++)
	  {
		b[i][j]=a[i];
	  }
	}
  cout<<"\n Matrix In Given Style .."<<endl;
  for(i=0;i<size;i++)
	{
	 for(j=size;j>0;j--)
	  {
		cout<<b[i][j]<<" 0 ";
	  }
	  cout<<endl;
	}
}

void main()
{
  int a[100],i,size;
  cout<<"\n Enter The Size Of Array : ";
  cin>>size;
  cout<<"\n Enter 1-D Array : "<<endl;
  for(i=0;i<size;i++)
	cin>>a[i];
  style(a,size);
}