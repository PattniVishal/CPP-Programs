#include<iostream.h>
#include<math.h>
void main()
{
char ans;
double res,y;
const double e=2.71828;
  cout<<"\n Enter Value Of 'y' : ";
  cin>>y;
  res=2-y*exp(2*y)+pow(4,y);
  cout<<"\n The Result Of The Expression Is "<<res;
}
