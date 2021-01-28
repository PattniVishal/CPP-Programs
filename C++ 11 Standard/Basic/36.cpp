//WAP to accept 10 numbers and find maximum and minimum among them.
#include<iostream.h>
void main()
{
 int i,a,max,min;
	for(i=1;i<=10;i++)
	 {
	  cout<<"\n Enter Number "<<i<<" : ";
	  cin>>a;
		if(i==1)
		 {
		 max=a;
		 min=a;
       }
		if(a>max)
		 max=a;
		if(a<min)
		 min=a;
	 }
 cout<<"\n Maximum Number Is : "<<max;
 cout<<"\n Minimum Number Is : "<<min;
}
