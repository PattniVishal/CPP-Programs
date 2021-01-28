//Electricity board bill calculation.
#include<iostream.h>
#include<stdio.h>
void main()
{
 float unit,use,bill;
 char name[30];
 cout<<"\n Enter Your Name : ";
 gets(name);
 cout<<"\n Enter Units Consumed : ";
 cin>>unit;
	if(unit<=100)
	 use=unit*40;
	if(unit<=200)
	 use=4000+((unit-100)*50);
	if(unit>=300)
	 use=14000+((unit-300)*60);
 bill=(use/100)+50;
 cout<<"\n Your Total Bill Amount Is Rs. "<<bill;
}