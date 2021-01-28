#include<iostream.h>
void main()
{
float a,b,c,b1,b2,b3;
cout<<"\n Enter Any 3 Numbers : ";
cin>>a>>b>>c;
b1=a;
if(b>b1)
  b1=b;
if(c>b1)
  b1=c;
if(a==b1)
  {
	 if(b>c)
	  {
		b2=b;
		b3=c;
	  }
	 else
	  {
		b2=c;
		b3=b;
	  }
  }
else if(b==b1)
  {
	 if(a>c)
	  {
		b2=a;
		b3=c;
	  }
	 else
	  {
		b2=c;
		b3=a;
	  }
  }
else
  {
	 if(b>a)
	  {
		b2=b;
		b3=a;
	  }
	 else
	  {
		b2=a;
		b3=b;
	  }
  }
cout<<"\n Descending Order Is "<<b1<<" , "<<b2<<" , "<<b3<<" . ";
}
