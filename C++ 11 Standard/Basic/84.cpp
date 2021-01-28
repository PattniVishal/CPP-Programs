//PROGRAM - 84
//Create function to find area of circle and call it in main.

#include<iostream.h>
#include<math.h>
void areacir(float rad)
{
  float pi=3.14,area;
  area=pi*(pow(rad,2));
  cout<<"\n The Area Of The Circle With Radius '"<<rad<<"' Is : "<<area;
}

void main()
{
  float r;
  cout<<"\n Enter The Radius Of Circle 'r' : ";
  cin>>r;
  areacir(r);
}
