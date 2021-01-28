//PROGRAM - 116
//Enter m x n matrix and find sum of row and sum of column

#include<iostream.h>
void main()
{
  int a[10][10],i,j,row,col,sum=0,ssum=0;
  cout<<"\n Enter Number Of Row Of MATRIX : ";
  cin>>row;
  cout<<"\n Enter Number Of Column Of MATRIX : ";
  cin>>col;

//Loop starts for inputing and displaying elements of MATRIX..
  cout<<"\n Enter Elements Of MATRIX.."<<endl;
  for(i=0;i<row;i++)
	{
	 for(j=0;j<col;j++)
	  {
		cin>>a[i][j];
	  }
	}
  cout<<"\n MATRIX Is.."<<endl;
  for(i=0;i<row;i++)
	{
	 for(j=0;j<col;j++)
	  {
		cout<<a[i][j]<<" ";
	  }
	  cout<<endl;
	}

//Loop starts for doing addition of row and column..
  cout<<"\n Row And Column Sum .."<<endl;
  for(i=0;i<row;i++)
	{
	 sum=0;
	  for(j=0;j<col;j++)
		{
		 sum+=a[i][j];
		}
		a[i][col]=sum;
		ssum+=sum;
	}
  for(j=0;j<col;j++)
	{
	 sum=0;
	  for(i=0;i<row;i++)
		{
		 sum+=a[i][j];
		}
		a[row][j]=sum;
	}
	a[row][col]=ssum;
  for(i=0;i<=row;i++)
	{
	 for(j=0;j<=col;j++)
	  {
		cout<<a[i][j]<<" ";
	  }
	  cout<<endl;
	}
}
