//PROGRAM - 94
//WAF to find LCM and HCF of two integers.

#include<iostream.h>

int lcm(int,int);
int hcf(int,int);
void main()
{
  int a,b;
  cout<<"\n Enter Numer 1 : ";
  cin>>a;
  cout<<"\n Enter Numer 2 : ";
  cin>>b;
  cout<<"\n LCM Is : "<<lcm(a,b);
  cout<<"\n HCF Is : "<<hcf(a,b);
}

int lcm(int x,int y)
{
  for(int i=1;;i++)
	{
	 if((i%y==0) && (i%x==0))
	  {
		return i;
		break;
	  }
	}
}

int hcf(int x,int y)
{
  for(int i=(x*y);;i--)
	{
	 if((y%i==0) && (x%i==0))
	  {
		return i;
		break;
	  }
	}
}


