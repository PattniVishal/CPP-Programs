#include<iostream.h>
void main()
{
int exp,age,sal;
cout<<"\n Are You Experienced ? "
	 <<"\n Enter '1' for Yes, '0' for No   : ";
cin>>exp;
cout<<"\n Enter Your Age : ";
cin>>age;
sal=(exp)?((age>35)?6000:(age>28)?4800:3000):2000;
cout<<"\n Your Salary Is Rs. "<<sal;
}
