//PROGRAM - 92
/* WAF that takes two char arguments and return 0 if both argument are equal.
  The function returns -1 if first argument is smaller than second and 1 if the
  second argument is smaller than first.    */

#include<iostream.h>
int check(char x,char y)
{
  int ans;
	if(x==y)
	 ans=0;
	if(x<y)
	 ans=-1;
	if(x>y)
	 ans=1;
  return ans;
}

void main()
{
  char a,b;
  int ans;
  cout<<"\n Enter Character 1 : ";
  cin>>a;
  cout<<"\n Enter Character 2 : ";
  cin>>b;
  ans=check(a,b);
  cout<<"\n Returning Value : "<<ans;
}