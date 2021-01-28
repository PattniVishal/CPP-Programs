#include<iostream.h>
void main()
{
int p;
float n;
cout<<"\n Enter Principal Amount : ";
cin>>p;
cout<<"\n Enter Number Of Years : ";
cin>>n;
if(n>10)
 {
 cout<<"\n SI with 8% Interest Is Rs. "<<(p*8*n)/100;
 }
else
 {
 cout<<"\n SI with 12% Interest Is Rs. "<<(p*12*n)/100;
 }
}
