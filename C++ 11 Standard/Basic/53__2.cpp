//WAP to print following sreies.
/*            &
				&   &
			 &       &
		  &           &
		& & & & & & & & &    */
#include<iostream.h>
#include<iomanip.h>
void main()
{
	int i,j;
	cout<<setw(40)<<"&";
	for(i=38,j=4;i>=32,j<=16;i-=2,j+=4)
	{
		cout<<endl<<setw(i);
		cout<<"&"<<setw(j)<<"&";
	}
	cout<<endl<<setw(i+2);
	for(j=10;j>=1;j--)
		cout<<"& ";
}
