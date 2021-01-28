//PROGRAM - 128
/* Define a structure time having 2 integer variables hours and minutes. Declare 2 objects of time
  t1 and t2. Read its value. Using these inputs, write a program to change time in am and pm.    */

#include<iostream.h>
#include<stdio.h>
#include<string.h>
struct time
	 {
		int hr;
		int min;
	 };
int newtim(time t)
{
  if(t.hr>12)
	t.hr-=12;
  return (t.hr);
}

void main()
{
  time t1,t2;
  char not[20];
  hour:
  cout<<"\n Enter The Time In Hours (HH) : ";
  cin>>t1.hr;
	if(t1.hr>24)
	 {
	  cout<<"\n Hours Not Valid... Please Check Time Again...";
	  goto hour;
	 }
  minute:
  cout<<"\n Enter The Time In Minutes (MM) : ";
  cin>>t1.min;
	if(t1.min>60)
	 {
	  cout<<"\n Minutes Not Valid... Please Check Time Again...";
	  goto minute;
	 }
  t2.min=t1.min;
  t2.hr=newtim(t1);
  if((t2.hr==t1.hr) && (t1.hr!=12))
	 strcpy(not,"a.m.");
  else if(t1.hr==0)
	{
	 strcpy(not,"a.m.");
	 t2.hr=12;
	}
  else
	 strcpy(not,"p.m.");
  cout<<"\n The Current Time Is  "<<t2.hr<<" : "<<t2.min<<" "<<not;
}

