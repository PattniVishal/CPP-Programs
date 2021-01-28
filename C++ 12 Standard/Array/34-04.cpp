//PROGRAM -- 34
//Array - Deletion In 1-D Array ... 4

#include<iostream.h>
#include<process.h>

//  .....  Function For Finding The Position Of Element - (Linear Search)  .....
int Lsearch(int arr[],int size,int del)
{
	for(int j=0;j<size;j++)
	{
		if(arr[j]==del)
			return j;
	}
	return -1;
}

void main()
{
	int arr[50],size,del,pos;
	char cont;

	cout<<"\n\t\t     ============= ----------- =============";
	cout<<"\n\t\t     ||   Deletion Function In 1-D Array   ||";
	cout<<"\n\t\t     ============= ----------- =============";
	cout<<"\n\n\t Enter The Size Of Array : ";
	cin>>size;
	cout<<"\n\t Enter The Elements Of Array : "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"\t\t";
		cin>>arr[i];
	}

	do
	{
	again:
	cout<<"\n\n -----------------------------------------------------------------------------";
	cout<<"\n\t Enter The Element To Delete : ";
	cin>>del;

	if(size==0)
	{
		cout<<"\n\t Array Underflow !!";
		exit(0);
	}

	pos=Lsearch(arr,size,del);
	if(pos!=-1)
	{
		arr[pos]=0;
	}
	else
	{
		cout<<"\n\t SORRY !! No Such Element Found In Array..";
		goto again;
	}

// .... Deleting The Array Element By Shifting The Index ...
	for(i=pos;i<size;i++)
	{
		arr[i]=arr[i+1];
	}
	size-=1;

	cout<<"\n\t After Deleting Element, Your Array Is...";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n\n -----------------------------------------------------------------------------";
	cout<<"\n ===> Do You Want To Delete More Elements (y/n) ? : ";
	cin>>cont;
	}while(cont=='y' || cont=='Y');
	cout<<"\n\t EXITING....";
}