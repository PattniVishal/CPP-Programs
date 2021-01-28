//PROGRAM - 119
//Input a matrix and find lower left and upper right triangle.

#include<iostream.h>
void lowerleft(int b[10][10],int m,int n)
{
  int i,j;
  cout<<"\n Lower Left Triangle Is .."<<endl;
  for(i=0;i<m;i++)
	{
	 for(j=0;j<n;j++)
	  {
	  if(i>j)
		 cout<<b[i][j]<<" ";
	  else
		cout<<"0 ";
	  }
	  cout<<endl;
	}
}

void upperright(int c[10][10],int m,int n)
{
  int i,j;
  cout<<"\n Upper Right Triangle Is .."<<endl;
  for(i=0;i<m;i++)
	{
	 for(j=0;j<n;j++)
	  {
	  if(i<j)
		 cout<<c[i][j]<<" ";
	  else
		cout<<"0 ";
	  }
	  cout<<endl;
	}
}

void main()
{
  int a[10][10],i,j,m,n;
  rc:
  cout<<"\n Enter Number Of Row Of MATRIX : ";
  cin>>m;
  cout<<"\n Enter Number Of Column Of MATRIX : ";
  cin>>n;
  if(m!=n)
  {
	 cout<<"\n Row And Column Must Be Equal"<<endl;
	 goto rc;
  }
  cout<<"\n Enter Elements Of MATRIX .."<<endl;
  for(i=0;i<m;i++)
	{
	 for(j=0;j<n;j++)
	  {
		cin>>a[i][j];
	  }
	}
  cout<<"\n MATRIX Is .."<<endl;
  for(i=0;i<m;i++)
	{
	 for(j=0;j<n;j++)
	  {
		cout<<a[i][j]<<" ";
	  }
	  cout<<endl;
	}
	lowerleft(a,m,n);
	upperright(a,m,n);
}