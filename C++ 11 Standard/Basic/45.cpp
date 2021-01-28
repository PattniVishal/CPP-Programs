//WAP to do following.
// (i) read an integer x.
//	(ii) form an integer by reversing the digit of x and integer 's' having sum of digit x.
#include<iostream.h>
void main()
{
 long  int x,r,i,rev=0,num,sum=0;
 cout<<"\n Enter Any Number  : ";
 cin>>x;
 num=x;
  for(i=1;x!=0;i++)
  {
	r=x%10;
	rev=(rev*10)+r;
	x=x/10;
	sum=sum+r;
  }
cout<<"\n Reverse Is "<<rev;
cout<<"\n Its Sum Is "<<sum;
}

