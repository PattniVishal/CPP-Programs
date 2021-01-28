// PROGRAM -- 24
// Array --- Addition of two similar matrices.

#include<iostream.h>
#include<process.h>
void main()
{
  int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
  cout<<"\n Enter Number Of Row And Column Of Matrix - A : ";
  cin>>m>>n;
  cout<<"\n Enter Number Of Row And Column Of Matrix - B : ";
  cin>>p>>q;
  if((m==n) && (p==q))
	cout<<"\n Both Matrices Are Identical And Can Be Added \n";
  else
	{
	  cout<<"\n Matrices Are Not Identical And Cannot Be Added";
	  exit(0);
	}
//Loop starts for inputing elements and displaying MATRIX - A ..
	  cout<<"\n Input Elements Of Matrix - A.. "<<endl;
	  for(i=0;i<m;i++)
		{
		 for(j=0;j<n;j++)
		  {
			cin>>a[i][j];
		  }
		}
	  cout<<"\n MATRIX - A.."<<endl;
	  for(i=0;i<m;i++)
		 {
			for(j=0;j<n;j++)
			 {
			  cout<<a[i][j]<<" ";
			 }
			 cout<<endl;
		 }
//Loop starts for inputing elements and displaying MATRIX - B ..
	  cout<<"\n Input Matrix - B.. "<<endl;
	  for(i=0;i<p;i++)
		{
		 for(j=0;j<q;j++)
		  {
			cin>>b[i][j];
		  }
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
//Loop starts for finding sum of two matrices ..
	  for(i=0;i<3;i++)
		{
		  for(j=0;j<3;j++)
			{
			 c[i][j]=a[i][j]+b[i][j];
			}
		}
	  cout<<"\n The Sum Of Two Matrices.. "<<endl;
	  for(i=0;i<m;i++)
		{
		 for(j=0;j<n;j++)
		  {
			cout<<" "<<c[i][j];
		  }
		  cout<<endl;
		}
}


