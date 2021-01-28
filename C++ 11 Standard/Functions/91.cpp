//PROGRAM - 91
//WAF to take int argument and returns zero if given number is prime otherwise return -1.

#include<iostream.h>
int prcheck(int n)
{
  int a=0;
	for(int i=1;i<=n;i++)
	 {
	  if((n%i)==0)
		a++;
	 }
	if(a==2)
	 {
	  cout<<"\n It Is Prime."<<endl;
	  return 0;
	 }
	else
	 {
	  cout<<"\n It Is Composite."<<endl;
	  return -1;
	 }
}

void main()
{
  int x,b;
  cout<<"\n Enter The Number : ";
  cin>>b;
  x=prcheck(b);
  cout<<"\n Returning Value "<<x;
}
