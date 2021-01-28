// PROGRAM -- 20
// Array --- Selection Sort.

#include<iostream.h>
#include<conio.h>

//  .....  Function For Sorting Array Using SELECTION SORT  .....
void Sel_Sort(int arr[],int size)
{
	int min,pos,temp;
	min=arr[0];
	for(int i=0;i<size-1;i++)
	{
		min=arr[i];
		pos=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<min)
			{
				min=arr[j];
				pos=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[pos];
		arr[pos]=temp;
		cout<<"\n\t Array After Pass "<<i+1<<" is ---   ";
		for(j=0;j<size;j++)
			cout<<arr[j]<<" ";
	}

	cout<<"\n\n\t --------- The Sorted Array Is ---------";
	for(i=0;i<size;i++)
	{
		cout<<"\n\t\t Element "<<i+1<<" : "<<arr[i];
	}
}


void main()
{
	int arr[50],size;
	char cont;

	do
	{
	cout<<"\n\t\t     ============= ----------- =============";
	cout<<"\n\t\t     ||         Selection Sorting         ||";
	cout<<"\n\t\t     ============= ----------- =============";
	cout<<"\n\n\t Enter The Size Of Array : ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"\n\t\t Element "<<i+1<<" : ";
		cin>>arr[i];
	}

	Sel_Sort(arr,size);

	cout<<"\n\n\t Do You Want To Sort Another Array ? (Y/N) : ";
	cin>>cont;
	clrscr();
	}while(cont=='y' || cont=='Y');
   cout<<"\n\t\t !!!!!   EXITING   !!!!!";
}
