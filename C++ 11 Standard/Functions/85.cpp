//PROGRAM - 85
//Design a function to swap two integers. (Using third extra variable).

#include<iostream.h>
void swapint(int a,int b)
 {
  int temp;
  temp=a;
  a=b;
  b=temp;
  cout<<"\n After Swapping, The Value Of 'a' Is : "<<a;
  cout<<"\n After Swapping, The Value Of 'b' Is : "<<b;
 }

void main()
 {
  int z,x;
  cout<<"\n Enter The Value Of 'a' : ";
  cin>>z;
  cout<<"\n Enter The Value Of 'b' : ";
  cin>>x;
  swapint(z,x);
 }

