//Enter any number of days and display its years, weeks and days.
#include<iostream.h>
void main()
{
int totdays,years,weeks,days,num1;
cout<<"\n Enter Total Number Of Days : ";
cin>>totdays;
years=totdays/365;
num1=totdays%365;
weeks=num1/7;
days=num1%7;
cout<<"\n";
cout<<"Years = "<<years<<",";
cout<<"Weeks = "<<weeks<<",";
cout<<"Days = "<<days<<".";
}
