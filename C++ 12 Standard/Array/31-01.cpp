//PROGRAM -- 31
//Array - Linear Search ... 1

#include<iostream.h>
#include<stdio.h>

//  .....  Function For Binary Search  .....
void Lsearch(int arr[],int size,int ser)
{
	int flag=0;
	for(int j=0;j<size;j++)
	{
		if(arr[j]==ser)
		{
			flag=1;
			cout<<"\n\t Element Found At... ";
			cout<<"\n\t\t ==> Index : "<<j;
			cout<<"\n\t\t ==> Position : "<<j+1;
			cout<<"\n\t ========== ========== ==========";
		}
	}
	if(!flag)
		cout<<"\n\t ERROE ! Element Not Found...";
}

void main()
{
	int arr[50],size,ser;
	cout<<"\n\t\t     ============= ---------- =============";
	cout<<"\n\t\t     ||    Linear Search In 1-D Array    ||";
	cout<<"\n\t\t     ============= ---------- =============";
	cout<<"\n\n\t Enter The Size Of Array : ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"\n\t Enter Element "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"\n\n\t ========== ========== ==========";
	cout<<"\n\t Enter The Element To Search : ";
	cin>>ser;

	Lsearch(arr,size,ser);
}
