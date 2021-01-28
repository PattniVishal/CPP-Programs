#include<iostream.h>
void main()
{
	int no;
	cout<<"\n How Many Rows You Want To Print ? : ";
	cin>>no;
	for(int i=no; i>=1; i--)
	 {
		for(int k=1; k<=i; k++)
		 {
		  cout<<k<<" ";
		 }
		for(int j=(no-1);j>=i; j--)
		 {
		  cout<<"0 ";
		 }
	cout<<endl;
	}
}
