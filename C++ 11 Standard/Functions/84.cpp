//PROGRAM - 84
//Create a function to find area of circle and call it in main.

#include<iostream.h>
#include<math.h>
const float pi=3.14;
void findarea(float r)
 {
  float area;
  area=pi*(pow(r,2));
  cout<<"\n The Area Of The Circle With Radius  "<<r<<"  cm. is "<<area<<" sq. cm.";
 }

void main()
 {
  float rad;
  cout<<"\n Enter The Radius Of The Circle 'r' : ";
  cin>>rad;
  findarea(rad);
 }