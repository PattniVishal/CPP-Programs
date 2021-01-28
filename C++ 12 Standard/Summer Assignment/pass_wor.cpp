// Special Program
// Program To Type Password As '*'

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
	 clrscr();
	 char c[6],n[6];
	 char newpass[6]="vishal";
	 char name[30];
	 cout<<"\n\n\t\t Enter Your User Name : ";
	 gets(name);
	 cout<<"\n\t\t Enter Your Password : "<<endl;
//	 for(int i=0;i<6;i++)
    while
	 {
		  c[i]=getch();
		  cout<<"*";
		  n[i]=c[i];
	 }

	 cout<<endl;
//	 cout<<"your password waas"<<endl;
//	 for(int j=0;j<5;j++)
//	 {
//		  cout<<" "<<c[j];
//	 }
	 if(strcmp(n,newpass)!=0)
		cout<<"\n\n\t\t OK..";
	 else
		cout<<"\n\n\t\t Wrong Password..";
}