//PROGRAM - 117
//Find the transpose of matrix.

#include<iostream.h>
void main()
{
  int a[10][10],b[10][10],i,j,m,n;
  cout<<"\n Enter Number Of Rows Of MATRIX : ";
  cin>>m;
  cout<<"\n Enter Number Of Columns Of MATRIX : ";
  cin>>n;

//Loop starts for inputing and displaying original MATRIX..
  cout<<"\n Enter Elements Of MATRIX.."<<endl;
  for(i=0;i<m;i++)
	{
	 for(j=0;j<n;j++)
	  {
		cin>>a[i][j];
	  }
	}
  cout<<"\n Original MATRIX Is.."<<endl;
  for(i=0;i<m;i++)
	{
	 for(j=0;j<n;j++)
	  {
		cout<<a[i][j]<<" ";
	  }
	  cout<<endl;
	}

//Loop starts for transpose of matrix..
  for(i=0;i<n;i++)
	{
	 for(j=0;j<m;j++)
	  {
		b[i][j]=a[j][i];
	  }
	}
  cout<<"\n Transposed MATRIX Is.."<<endl;
  for(i=0;i<n;i++)
	{
	 for(j=0;j<m;j++)
	  {
		cout<<b[i][j]<<" ";
	  }
	  cout<<endl;
	}
}
