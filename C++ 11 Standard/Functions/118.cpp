//PROGRAM - 118
/*Enter m x n matrix. It must be square and display left and right diagonal
  elements. Also find sum of them.       */

#include<iostream.h>
void rightdia(int b[10][10],int m,int n)
{
  int i,j,rsum=0;
  cout<<"\n Right Diagonal Is .."<<endl;
  for(i=0;i<m;i++)
	{
	 for(j=0;j<n;j++)
	  {
	  if((i+j)==(m-1))
		{
		 cout<<b[i][j]<<" ";
		 rsum+=b[i][j];
		}
	  else
		cout<<"0 ";
	  }
	  cout<<endl;
	}
	cout<<"\n Its Sum Is : "<<rsum<<endl;
}

void leftdia(int c[10][10],int m,int n)
{
  int i,j,lsum=0;
  cout<<"\n Left Diagonal Is .."<<endl;
  for(i=0;i<m;i++)
	{
	 for(j=0;j<n;j++)
	  {
	  if(i==j)
		{
		 cout<<c[i][j]<<" ";
		 lsum+=c[i][j];
		}
	  else
		cout<<"0 ";
	  }
	  cout<<endl;
	}
	cout<<"\n Its Sum Is : "<<lsum<<endl;
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
	cout<<"\n Row And Column Must Be Same "<<endl;
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
	rightdia(a,m,n);
	leftdia(a,m,n);
}
