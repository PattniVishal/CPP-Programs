//PROGRAM - 78
//WAP that reads 3 strings and print the largest and the smallest string.

#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
  char s1[50],s2[50],s3[50];
  int long1,long2,long3;
  cout<<"\n Enter String 1 : ";
  gets(s1);
  cout<<"\n Enter String 2 : ";
  gets(s2);
  cout<<"\n Enter String 3 : ";
  gets(s3);
  long1=strlen(s1);
  long2=strlen(s2);
  long3=strlen(s3);
	 if((long1>long2) && (long1>long3))
		{
		  cout<<"\n Biggest String Is '"<<s1<<"'";
			 if(long2>long3)
			  {
				cout<<"\n Smallest String Is '"<<s3<<"'";
			  }
			 else
			  {
				cout<<"\n Smallest String Is '"<<s2<<"'";
			  }
		}
	 if((long2>long1) && (long2>long3))
		{
		  cout<<"\n Biggest String Is '"<<s2<<"'";
			 if(long1>long3)
			  {
				cout<<"\n Smallest String Is '"<<s3<<"'";
			  }
			 else
			  {
				cout<<"\n Smallest String Is '"<<s1<<"'";
			  }
		}
	 if((long3>long2) && (long3>long1))
		{
		  cout<<"\n Biggest String Is '"<<s3<<"'";
			 if(long2>long1)
			  {
				cout<<"\n Smallest String Is '"<<s1<<"'";
			  }
			 else
			  {
				cout<<"\n Smallest String Is '"<<s2<<"'";
			  }
		}
}

