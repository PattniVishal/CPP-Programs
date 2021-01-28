//PROGRAM - 122
//Enter two matrix and check both are identical or not and find their multiplication.

#include<iostream.h>
void main()
{
  int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
  rc:
  cout<<"\n Enter Row Of Matrix - A : ";
  cin>>m;
  cout<<"\n Enter Column Of Matrix - A : ";
  cin>>n;
  cout<<"\n Enter Row Of Matrix - B : ";
  cin>>p;
  cout<<"\n Enter Column Of Matrix - B : ";
  cin>>q;
  if((m==q) && (n==p))
	cout<<"\n Now, You Can Proceed \n";
  else
	{
	  cout<<"\n Row Of One Matrix Should Be Equal To Column Of Another Matrix.. \n";
	  goto rc;
	}

//Loop starts for inputing elements of MATRIX - A and MATRIX - B..
	  cout<<"\n Input Elements Of Matrix - A.. "<<endl;
	  for(i=0;i<m;i++)
		{
		 for(j=0;j<n;j++)
		  {
			cin>>a[i][j];
		  }
		}
	  cout<<"\n Input Elements Of Matrix - B.. "<<endl;
	  for(i=0;i<p;i++)
		{
		 for(j=0;j<q;j++)
		  {
			cin>>b[i][j];
		  }
		}

//Loop starts for displaying elements of MATRIX - A and MATRIX - B..
	  cout<<"\n MATRIX - A.."<<endl;
	  for(i=0;i<m;i++)
		 {
			for(j=0;j<n;j++)
			 {
			  cout<<a[i][j]<<" ";
			 }
			 cout<<endl;
		 }
	  cout<<"\n MATRIX - B.."<<endl;
	  for(i=0;i<p;i++)
		 {
			for(j=0;j<q;j++)
			 {
			  cout<<b[i][j]<<" ";
			 }
			 cout<<endl;
		 }
//Loop starts for finding product of two matrices ..
	  for(i=0;i<m;i++)
		{
		  for(j=0;j<q;j++)
			{
			  c[i][j]=0;
			  for(k=0;k<n;k++)
				{
				 c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
	  cout<<"\n The Product Of Two Matrices.. "<<endl;
	  for(i=0;i<m;i++)
		{
		 for(j=0;j<n;j++)
		  {
			cout<<" "<<c[i][j];
		  }
		  cout<<endl;
		}
}