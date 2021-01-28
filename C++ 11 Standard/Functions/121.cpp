//PROGRAM - 121
//Input m x n matrix and form 1-D array that will have all the elements of if they form in row major form.

#include<iostream.h>
void oned(int b[10][10],int m,int n)
{
  int i,j,k=0,c[100];
  for(i=0;i<m;i++)
	{
	 for(j=0;j<n;j++)
	  {
		c[k]=b[i][j];
		k++;
	  }
	}
  cout<<"\n\t 1-D Matrix.."<<endl;
  for(k=0;k<m*n;k++)
	 cout<<c[k]<<" ";
}

void main()
{
  int a[10][10],i,j,m,n,p,q;
  cout<<"\n Enter Number Of Rows Of Matrix : ";
  cin>>m;
  cout<<"\n Enter Number Of Columns Of Matrix : ";
  cin>>n;
  cout<<"\n Input Elements Of Matrix.."<<endl;
  for(i=0;i<m;i++)
	{
	 for(j=0;j<n;j++)
	  {
		cin>>a[i][j];
	  }
	}
  cout<<"\n\t 2-D Matrix.."<<endl;
  for(i=0;i<m;i++)
	{
	 for(j=0;j<n;j++)
	  {
		cout<<a[i][j]<<" ";
	  }
	  cout<<endl;
	}
  oned(a,m,n);
}
