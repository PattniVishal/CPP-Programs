//PROGRAM - 125
/* Define a structure student, create object, then input and display details
  and find result.    */

#include<iostream.h>
#include<stdio.h>
struct student
	 {
		int roll;
		float mark;
		char name[50];
	 }s;
void main()
{
  int i;
  float sum=0,avg,per;
  cout<<"\n Enter The Name Of The Student : ";
  gets(s.name);
  cout<<"\n Enter The Roll Number Of The Student : ";
  cin>>s.roll;
	 for(i=0;i<3;i++)
	  {
		 cout<<"\n Enter The Marks In Subject "<<i+1<<" : ";
		 cin>>s.mark;
		 sum+=s.mark;
	  }
  cout<<"\n Grand Total : "<<sum;
  avg=(sum/3);
  cout<<"\n Average Marks Is : "<<avg;
  per=(sum*100)/300;
  cout<<"\n Your Percentage Is : "<<per<<" % ";
}
