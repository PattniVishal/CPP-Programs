//PROGRAM - 111
//Program to delete duplicate element from a vector.

#include<iostream.h>
void main()
{
  int i,j,k,num,ans=0;
  float vec[100];
  cout<<"\n Enter The Size Of The Vector (1-100) : ";
  cin>>num;
  cout<<"\n Enter The "<<num<<" Elements Of Vector : ";
	 for(i=0;i<num;i++)
		cin>>vec[i];
  cout<<"\n Original Vector Is : ";
	 for(i=0;i<num;i++)
		cout<<" "<<vec[i];
	 for(i=0;i<num-1;i++)
		{
		  for(j=i+1;j<num;j++)
			 {
				if(vec[i]==vec[j])
				  {
					 num=num-1;
						for(k=j;k<num;k++)
						  {
							 vec[k]=vec[k+1];
						  }
						  ans=1;
						  j=j-1;
				  }
			 }
		}
			 if(ans==0)
				{
				  cout<<"\n Vector Is Without Duplicates..";
				}
			 else
				{
				  cout<<"\n Vector After Deleting Duplicates : ";
					 for(i=0;i<num;i++)
						{
						  cout<<" "<<vec[i];
						}
				}
}
