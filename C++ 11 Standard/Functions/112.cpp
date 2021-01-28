//PROGRAM - 112
//Enter 3 employees 6 month salary and find the total salary.

#include<iostream.h>
#include<stdio.h>
void main()
{
  char name[50];
  int sal[3][6],sum;
	for(int i=0;i<3;i++)
	  {
		 sum=0;
		 cout<<"\n\n Enter The Name Of The Employee : ";
		 gets(name);
			for(int j=0;j<6;j++)
			  {
				 cout<<"\n Enter The Salary Of Month "<<j+1<<" : ";
				 cin>>sal[i][j];
				 sum+=sal[i][j];
			  }
		 cout<<"\n Your Total Salary Is : "<<sum;
       cout<<"\n-------------------------------";
	  }
}
