//WAP to print following sreies.
/*         *
			 * *
			* * *
		  * * * *
		 * * * * *
		  * * * *
			* * *
			 * *
			  *             */
#include<iostream.h>
#include<iomanip.h>
void main()
{
 int i,j,row,c=3;
 char sym;
 cout<<"\n Enter Number Of Rows : ";
 cin>>row;
 cout<<"\n Enter Any Symbol : ";
 cin>>sym;
 cout<<setw(40)<<sym<<endl;
  for(i=1;i<=(row-1);i++)
	 {
	  cout<<setw(40-(2*i));
		 for(j=1;j<=c;j++)
		  {
			cout<<sym<<" ";
		  }
		  cout<<endl;
		  c+=2;
	 }
  for(i=row;i>=1;i--)
	 {
	  cout<<setw(40-(2*i));
		 for(j=1;j<=c;j++)
		  {
			cout<<sym<<" ";
		  }
		  cout<<endl;
		  c-=2;
	 }
	 cout<<setw(40)<<sym<<endl;
}
