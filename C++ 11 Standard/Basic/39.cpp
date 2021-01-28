//Enter any number and write a program to find its factorial.
#include<iostream.h>
void main()
{
 int n,fact=1,i;
 cout<<"\n Enter Any Number : ";
 cin>>n;
 for(i=n;i>1;i--)
  fact*=i;
 cout<<"\n The Factorial Of "<<n<<" Is "<<fact;
}