//Enter a number and display its reverse.
#include<iostream.h>
void main()
{

long  int n,r,i,rev=0,num;
 cout<<"\n Enter Any Number : ";
 cin>>n;
 num=n;
 for(i=1;n!=0;i++)
  {
	r=n%10;
	rev=(rev*10)+r;
	n=n/10;
  }
cout<<"\n Reverse Is "<<rev;
}