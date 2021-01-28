#include<iostream.h>
void main()
{
 float s;
 cout<<"\n Enter Your Sales : ";
 cin>>s;
	if(s>=0&& s<=5000)
	  {
		cout<<"\n Your Commission Is Rs. "<<(s*0)/100;
	  }
	else if(s>=5001&& s<=12000)
	  {
		cout<<"\n Your Commission Is Rs. "<<(s*3)/100;
	  }
	else if(s>=12001&& s<=22000)
	  {
		cout<<"\n Your Commission Is Rs. "<<(s*7)/100;
	  }
	else if(s>=22001&& s<=30000)
	  {
		cout<<"\n Your Commission Is Rs. "<<(s*10)/100;
	  }
	else
	  {
		cout<<"\n Your Commission Is Rs. "<<(s*15)/100;
	  }
}
