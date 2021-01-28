//WAP to read the number continuously and find the sum. When -ve number is input program should be stopped.
#include<iostream.h>
void main()
{
 int i,n,sum=0;
  do{
	cout<<"\n Enter Number : ";
	cin>>n;
	sum+=n;
	}  while(n>=0);
 cout<<"\n Sum Of The Numbers = "<<sum;
}