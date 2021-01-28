//PROGRAM - 95
//WAF to sum natural numbers starting from given number.

#include<iostream.h>
int sum(int a,int b)
{
  int sum=0;
	for(int i=a;i<=b;i++)
	 {
	  sum+=i;
	 }
	return sum;

}

void main()
{
  int x,y,z;
  cout<<"\n Enter The Starting Number : ";
  cin>>x;
  cout<<"\n Enter The Ending Number : ";
  cin>>y;
  z=sum(x,y);
  cout<<"\n The Sum Is : "<<z;
}
