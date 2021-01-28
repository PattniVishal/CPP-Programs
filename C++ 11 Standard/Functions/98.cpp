//PROGRAM - 98
/*WAP to
 (i) sqlarge() that is passed two integer argument by reference and  then sets the larger of
	 the two number of square.
 (ii) sum() that is passed an integer argument by value and that returns the sum of the
	  individual digits of the passed numbers.
 (iii) main() that exercises above two functions by getting two integers from the user and
	  by printing the sum of the individual digits of the square of the larger number.    */

#include<iostream.h>
#include<math.h>
int sqlarge(int &a,int &b)
{
  int lar;
  if(a<b)
	 lar=pow(b,2);
  else
	 lar=pow(a,2);
  return lar;
}

int sum(int num)
{
  int sum=0,p;
  for(int i=num;i>=num;i++)
	 {
		p=num%10;
		sum+=p;
		num/=10;
	 }
  return sum;
}

void main()
{
  int x,y,a1,a2;
  cout<<"\n Enter Number 1 : ";
  cin>>x;
  cout<<"\n Enter Number 2 : ";
  cin>>y;
  a1=sqlarge(x,y);
  cout<<"\n Square Of The Larger Number Is : "<<a1;
  a2=sum(a1);
  cout<<"\n Sum Of Their Digits Are : "<<a2;
}