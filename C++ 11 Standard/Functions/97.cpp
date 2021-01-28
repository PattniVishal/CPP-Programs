//PROGRAM - 97
/*Create a menu driven program to find area of triangle, cirrcle and rectangle.
  Design function for each, which will return area as a value and according to
  user's choice perform operations using switch.        */

#include<iostream.h>
float areacir(float rad)
{
  float pi=3.14,ar;
  ar=pi*rad*rad;
  return ar;
}
float areatri(float a,float b,float c)
{
  float ar,s;
  s=(a+b+c)/3;
  ar=(s*(s-a)*(s-b)*(s-c));
  return ar;
}
float arearec(float m,float n)
{
  float ar;
  ar=m*n;
  return ar;
}
void main()
{
  int ch;
  float x;
  cout<<"\n ******** Area Menu ********";
  cout<<"\n 1. Circle.."
		<<"\n 2. Triangle.."
		<<"\n 3. Rectangle..";
  cout<<"\n Whose Area You Want To Find ? : ";
  cin>>ch;
  switch(ch)
	  {
		  case 1:
			 {
				float r;
				cout<<"\n Enter The Radius Of The Circle : ";
				cin>>r;
				x=areacir(r);
				cout<<"\n Area Of Circle Is : "<<x<<" sq. unit";
				break;
			 }
		  case 2:
			 {
				float p,q,r;
				cout<<"\n Enter Side 1 : ";
				cin>>p;
				cout<<"\n Enter Side 2 : ";
				cin>>q;
				cout<<"\n Enter Side 3 : ";
				cin>>r;
				x=areatri(p,q,r);
				cout<<"\n Area Of Triangle Is : "<<x<<" sq. unit";
				break;
			 }
		  case 3:
			 {
				float l,b;
				cout<<"\n Enter The Length : ";
				cin>>l;
				cout<<"\n Enter The Breadth : ";
				cin>>b;
				x=arearec(l,b);
				cout<<"\n Area Of Rectangle Is : "<<x<<" sq. unit";
				break;
			 }
		  default :
			 {
				cout<<"\n Wrong Choice....";
				break;
			 }
		}
}

