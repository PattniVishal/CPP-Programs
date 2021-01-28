//PROGRAM - 101
/* Write a complete C++ program that invokes the function satis() to find whether
4 integers a,b,c,d sent to satis() satisfy the equation (a^3)+(b^3)+(c^3)=(d^3) or
do not. The function satis() return 0 if the above equation is satisfied else return -1.      */

#include<iostream.h>
#include<math.h>
float satis(float a,float b,float c,float d)
{
  float part1,part2;
  part1=(pow(a,3)+pow(b,3)+pow(c,3));
  part2=pow(d,3);
	if(part1==part2)
	  {
		cout<<"\n LHS = RHS "<<endl;
		return 0;
	  }
	else
	  {
		 cout<<"\n LHS != RHS "<<endl;
		 return -1;
	  }
}

void main()
{
  int m;
  float w,x,y,z;
  cout<<"\n Enter The Value Of 'a' : ";
  cin>>w;
  cout<<"\n Enter The Value Of 'b' : ";
  cin>>x;
  cout<<"\n Enter The Value Of 'c' : ";
  cin>>y;
  cout<<"\n Enter The Value Of 'd' : ";
  cin>>z;
  m=satis(w,x,y,z);
  cout<<"\n Returning Value "<<m;
}
