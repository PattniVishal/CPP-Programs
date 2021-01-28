//PROGRAM - 86
//Define a function which computes SI for fixed rate of interest 9.5

#include<iostream.h>
const float r=9.5;
void calsi(float pr,float ti)
 {
  float si;
  si=(pr*ti*r)/100;
  cout<<"\n Your Simple Interest Is Rs. "<<si;
 }

void main()
 {
  float p,t;
  cout<<"\n Enter The Principal Amount : ";
  cin>>p;
  cout<<"\n Enter The Time Period (In Years) : ";
  cin>>t;
  calsi(p,t);
 }
