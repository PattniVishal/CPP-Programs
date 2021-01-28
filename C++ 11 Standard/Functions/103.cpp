//PROGRAM - 103
/* Program to count the number of employees earning more than Rs. 1 lakh per 6 months.
  The monthly salary of 3 employees are given. (Add employee detail).    */

#include<iostream.h>
#include<stdio.h>
void main()
{
  char name[70],gen;
  int code,count=0;
  float sal,sum=0;
  long double limit=100000;
	 for(int i=1;i<=3;i++)
	  {
		cout<<"\n\n Enter The Name Of The Employee : ";
		gets(name);
		cout<<"\n Enter The Employee Code Of "<<name<<" : ";
		cin>>code;
		cout<<"\n Enter Gender Of Employee (M/F) : ";
		cin>>gen;
		sum=0;
		  for(int j=1;j<=6;j++)
			{
			 cout<<"\n Enter The Salary Of Month "<<j<<" : ";
			 cin>>sal;
			 sum+=sal;
			}
			 cout<<"\n Your Salary For 6 Months Is "<<sum;
			 cout<<"\n ----------------------------";
			 if(sum>limit)
			  {
				count ++;
			  }
	  }

	 cout<<"\n There Are "<<count<<" Employees Earning More Than 1 Lakh."<<endl;
}
