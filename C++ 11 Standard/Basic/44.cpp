//WAP to print following series.
// 1-4   7-10   13-16   19-22   25-28   31-34   37-40.   
#include<iostream.h>
void main()
{
 int i;
  for(i=1;i<=40;i+=6)
	{
	 cout<<i<<"-"<<(i+3)<<"   ";
	}
}