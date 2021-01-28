//PROGRAM - 104
//Program to search a particular number in 1-D array. Create UDF for search.

#include<iostream.h>
int intsearch(int no[],int f)
{
  int flag=0;
  for(int i=0;i<10;i++)
	 {
	  if(no[i]==f)
		{
		 cout<<"\n The Number Is At "<<i+1<<" Position..";
		 flag=1;
		}
	 }
	 if(flag==0)
		cout<<"\n The Number You Are Finding Is Not Present..";
}

void main()
{
  int no[10],s,x;
  for(s=0;s<10;s++)
	 {
		cout<<"\n Enter Number "<<s+1<<" : ";
		cin>>no[s];
	 }
  cout<<"\n Enter The Number You Want To Search : ";
  cin>>s;
  x=intsearch(no,s);
}
