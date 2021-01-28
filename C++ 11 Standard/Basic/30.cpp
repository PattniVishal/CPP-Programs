//WAP to print following series.
//1 2 4 8 16 32 64 128.
#include<iostream.h>
void main()
{
 int i;
 for(i=1; ; )
  {
	cout<<i<<" ";
	 if(i==128)
	  break;
	 i*=2;
  }
}