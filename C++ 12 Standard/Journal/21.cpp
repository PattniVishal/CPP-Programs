// PROGRAM -- 21
// Array --- Insertion Sort.

#include<iostream.h>
#include<conio.h>
#include<limits.h>

//  .....  Function For Sorting Array Using INSERTION SORT  .....
void Ins_Sort(int arr[],int size)
{
	int temp,j;
	arr[0]=INT_MIN;
	for(int i=1;i<=size;i++)
	{
		temp=arr[i];
		j=i-1;
		while(temp<arr[j])
		{
			arr[j+1]=arr[j];
			j-=1;
		}
		arr[j+1]=temp;
		cout<<"\n\t Array After Pass "<<i<<" : ";
		for(int k=1;k<=size;k++)
			cout<<arr[k]<<" ";
	}
	cout<<"\n\n\t -------  The Sorted Array Is  -------";
	for(i=1;i<=size;i++)
	{
		cout<<"\n\t Element "<<i<<" : "<<arr[i];
	}
}

void main()
{
	int arr[20],size;
	char cont;
	do
	{
   clrscr();
	cout<<"\n\t\t     ============= ----------- =============";
	cout<<"\n\t\t     ||         Insertion Sorting         ||";
	cout<<"\n\t\t     ============= ----------- =============";
	cout<<"\n\n\t Enter The Size Of Array : ";
	cin>>size;
	for(int i=1;i<=size;i++)
	{
		cout<<"\n\t\t Element "<<i<<" : ";
		cin>>arr[i];
	}

	Ins_Sort(arr,size);

	cout<<"\n\n\t Do You Want To Sort Another Array ? (Y/N) : ";
	cin>>cont;
	}while(cont=='y' || cont=='Y');
	cout<<"\n\n\t\t !!!!!   EXITING   !!!!!";
}