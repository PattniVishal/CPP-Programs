//PROGRAM - 123
/*Write a C++ function which accepts an integer array and its size and replace
  elements having even values with its half and element having odd values
  with its twice. Write a main() to execute a function. */

#include<iostream.h>
void odd(int a[100],int i)
{
  int b;
  b=a[i]*2;
  cout<<b;
}

void even(int a[100],int i)
{
  int c;
  c=a[i]/2;
  cout<<c;
}

void main()
{
  int a[100],size,i;
  cout<<"\n Enter The Size Of Array : ";
  cin>>size;
  for(i=0;i<size;i++)
	{
	  cout<<"\n Enter Element "<<i+1<<" : ";
	  cin>>a[i];
		 if(a[i]%2!=0)
		  odd(a,i);
		 else
		  even(a,i);
	}
}

