//WAP to accept 3 digits and print all possible combinations.( For ex- if entered 123,then print 123,132,231,213,312,321)
#include<iostream.h>
void main()
{
int a,b,c;
cout<<"\n Enter Any Three Numbers : ";
cin>>a>>b>>c;
cout<<"\n All Possible Outcomes Are : ";
cout<<"\n"<<a<<b<<c
	 <<"\n"<<a<<c<<b
	 <<"\n"<<b<<c<<a
	 <<"\n"<<b<<a<<c
	 <<"\n"<<c<<a<<b
	 <<"\n"<<c<<b<<a;
}
