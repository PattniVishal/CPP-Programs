//WAP to print following sreies.
/*             *
				  * *
				 * * *
				* * * *
		    * * * *	* *       */

#include<iostream.h>
#include<iomanip.h>
void main()
{
  int i,j,c=2,row;
  char sym;
  cout<<"\n Enter Number Of Rows  :  ";
  cin>>row;
  cout<<"\n Enter The Symbol  :  ";
  cin>>sym;
  cout<<setw(40)<<sym<<endl;
	for(i=1;i<=(row-1);i++)
	  {
		cout<<setw(40-(i));
		 for(j=1;j<=c;j++)
		  {
			cout<<sym<<" ";
		  }
		  cout<<endl;
		  c+=1;
		}
}