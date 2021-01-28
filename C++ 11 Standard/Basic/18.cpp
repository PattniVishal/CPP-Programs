#include<iostream.h>
#include<math.h>
void main()
{
float a,b,c,root1,root2,delta;
cout<<"\n Enter Value Of 'a, b and c'  : ";
cin>>a>>b>>c;
if(!a)
cout<<"\n Value Of 'a' Should Not Be Zero(0)..";
else
{
  delta=b*b-4*a*c;
  if(delta>0)
	 {
	  root1=(-b+sqrt(delta))/(2*a);
	  root1=(-b-sqrt(delta))/(2*a);
	  cout<<"\n Roots Are Real And Unequal..";
	  cout<<"\n Root1 = "<<root1
			<<"\n Root2 = "<<root2;
	  }
  else if(delta==0)
	 {
	  root1=(-b+sqrt(delta))/(2*a);
	  root1=(-b-sqrt(delta))/(2*a);
	  cout<<"\n Root1 = "<<root1
			<<"\n Root2 = "<<root2;
	 }
  else
	 {
	  cout<<"\n Roots Are Complex And Imaginary..";
	 }
}
}
