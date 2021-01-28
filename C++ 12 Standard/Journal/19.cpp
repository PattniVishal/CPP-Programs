// PROGRAM -- 19
// Array --- Bubble Sort.

#include<iostream.h>
#include<conio.h>

//  .....  Function For Sorting Array Using BUBBLE SORT  .....
void Bubble_Sort(int arr[],int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<(size-1)-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		cout<<"\n\t Array After Pass "<<i+1<<" : ";
		for(j=0;j<size;j++)
			cout<<arr[j]<<" ";
	}
	cout<<"\n\n\t -------  The Sorted Array Is  -------";
	for(i=0;i<size;i++)
	{
		cout<<"\n\t Element "<<i+1<<" : "<<arr[i];
	}
}

void main()
{
	int arr[50],size;
	char cont;

	do
	{
	cout<<"\n\t\t     ============= ------------ =============";
	cout<<"\n\t\t     ||           Bubble Sorting           ||";
	cout<<"\n\t\t     ============= ------------ =============";
	cout<<"\n\n\t Enter The Size Of Array : ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"\n\t\t Element "<<i+1<<" : ";
		cin>>arr[i];
	}

	Bubble_Sort(arr,size);

	cout<<"\n\n\t Do You Want To Sort Another Array ? (Y/N) : ";
	cin>>cont;
	clrscr();
	}while(cont=='y' || cont=='Y');
	cout<<"\n\t\t !!!!!   EXITING   !!!!!";
}