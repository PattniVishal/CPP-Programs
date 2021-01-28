//PROGRAM - 127
// Program to ask employee number from user, and if details matches display its details.

#include<iostream.h>
#include<stdio.h>
struct addr
	 {
		int hno;
		char area[30],city[30],state[30];
	 };
struct employee
	 {
		int eno;
		char name[30],dsg[30];
		float sal;
		addr a;
	 };
employee e[3];

void enter()
{
  for(int i=0;i<3;i++)
	{
	 cout<<"\n Enter The Employee Number : ";
	 cin>>e[i].eno;
	 cout<<"\n Enter The Name Of Employee : ";
	 gets(e[i].name);
	 cout<<"\n Enter The Designation Of Employee : ";
	 gets(e[i].dsg);
	 cout<<"\n Please Enter Below Details Of Your Address...";
	 cout<<"\n House Number : ";
	 cin>>e[i].a.hno;
	 cout<<"\n Area : ";
	 gets(e[i].a.area);
	 cout<<"\n City : ";
	 gets(e[i].a.city);
	 cout<<"\n State : ";
	 gets(e[i].a.state);
	 cout<<"\n Enter The Monthly Salary : ";
	 cin>>e[i].sal;
}

void display(int i)
{
  cout<<"\n The Data Of The Employee Is ..";
  cout<<"\n Employee Number : "<<e[i].eno;
  cout<<"\n Name Of Employee : "<<e[i].name;
  cout<<"\n Employee Designation : "<<e[i].dsg;
  cout<<"\n Address : "<<e[i].a.hno<<" , "<<e[i].a.area;
  cout<<"\n , "<<e[i].a.city<<" , "<<e[i].a.state<<" , INDIA.";
  cout<<"\n Monthly Salary : "<<e[i].sal<<endl;
}

void main()
{
  enter();
  int empnu,i;
  cout<<"\n Enter The Employee Number To Find : ";
  cin>>empnu;
  int flag=0;
	 for(i=0;i<3;i++)
	  {
		if(empnu==e[i].eno)
		  {
			 display(i);
			 flag=1;
			 break;
		  }
	  }
		if(flag==0)
			  cout<<"\n SORRY ! No Employee Found !! Please Enter Valid Number...";
}


