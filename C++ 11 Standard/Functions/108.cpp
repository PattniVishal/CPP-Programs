//PROGRAM - 108
//Program to reverse the vector without using any extra variable.

#include<iostream.h>
void main()
{
  int vec[100],no;
  cout<<"\n How Many Vectors You Want (1-100) : ";
  cin>>no;
	 for(int i=0;i<no;i++)
	  {
		cout<<"\n Enter The Element "<<i+1<<" Of The Vector : ";
		cin>>vec[i];
	  }
  cout<<"\n Original Vector Is : ";
	 for(i=0;i<no;i++)
		cout<<" "<<vec[i];
	 for(int j=0,k=(no-1);j<no/2;j++,k--)
	  {
		 vec[j]=vec[j]+vec[k];
		 vec[k]=vec[j]-vec[k];
		 vec[j]=vec[j]-vec[k];
	  }
  cout<<"\n Reversed Vector Is : ";
	 for(i=0;i<no;i++)
		cout<<" "<<vec[i];
}
