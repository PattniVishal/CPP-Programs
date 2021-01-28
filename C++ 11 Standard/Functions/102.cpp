//PROGRAM - 102
/* Program to read prices of 10 items in an array and display the sum of all prices,
  product of all prices its average.           */

#include<iostream.h>
void main()
{
  long double pro=1;
  float price[10],sum=0,avg;
	for(int i=1;i<=10;i++)
	 {
		cout<<"\n Enter Price Of Item "<<i<<" : ";
		cin>>price[i];
		sum+=price[i];
		pro*=price[i];
	 }
	avg=sum/10;
  cout<<"\n Sum Of All Items : "<<sum;
  cout<<"\n Product Of All Items : "<<pro;
  cout<<"\n Average Of All Items : "<<avg;
}


