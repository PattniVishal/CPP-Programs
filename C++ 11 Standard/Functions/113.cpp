//PROGRAM - 113
/*Program to calculate result with total, average and grade for result of
  3 student for 4 test score   */

#include<iostream.h>
#include<stdio.h>
void main()
{
  char name[50];
  float res[3][4],sum=0,avg;
	 for(int i=0;i<3;i++)
		{
		sum=0;
		  cout<<"\n\n Enter The Name Of Student : ";
		  gets(name);
			 for(int j=0;j<4;j++)
				{
				  cout<<"\n Enter Marks In Test "<<j+1<<" Out Of 100 : ";
				  cin>>res[i][j];
				  sum+=res[i][j];
				}
				avg=sum/4;
		  cout<<"\n Total Marks : "<<sum;
		  cout<<"\n Average Of Marks : "<<avg;
		  if(sum<=124)
			 cout<<"\n GRADE : C"
				  <<"\n Needs Improvement..";
		  else if(sum>=125 && sum<=224)
			 cout<<"\n GRADE : B"
				  <<"\n Good Work..";
		  else
			 cout<<"\n GRADE : A"
				  <<"\n Excellent Work..";
		}
}