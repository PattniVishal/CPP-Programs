//Print any number and print its table.
#include<iostream.h>
void main()
{
 int i,n;
 cout<<"\n Which Table Do You Want To Print : ";
 cin>>n;
 for(i=1;i<=10;i++)
  {
	cout<<n<<" X "<<i<<" = "<<n*i<<endl;
  }
}