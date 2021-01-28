//Enter a number and check whether it is a palindrome or not.
#include<iostream.h>
#include<process.h>
void main()
{

 int n,r,i,rev=0,num;
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
 if(num==rev)
  {
	cout<<"\n Palindrome. ";
	exit(0);
  }

	cout<<"\n Not A Palindrome ";
}