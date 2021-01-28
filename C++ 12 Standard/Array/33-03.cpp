//PROGRAM -- 33
//Array - Insertion In 1-D Array ... 3

#include<iostream.h>
#include<process.h>

//  .....  Function For Finding The Appropriate Position Of Element  .....
int FindPos(int arr[],int size,int ins)
{
	int p;
	if(ins<arr[0])
		p=0;
	else
	{
		for(int j=0;j<size-1;j++)
		{
			if(arr[j]<=ins && ins<arr[j+1])
			{
				p=j+1;
				break;
			}
		}
		if(j==size-1)
			p=size;
	}
	return p;
}

void main()
{
	int arr[50],size,ins;
	int pos;
	char cont;

	cout<<"\n\t\t     ============= ---------- =============";
	cout<<"\n\t\t     ||   Insertion- Sort In 1-D Array   ||";
	cout<<"\n\t\t     ============= ---------- =============";
	cout<<"\n\n\t Enter The Size Of Array : ";
	cin>>size;
	cout<<"\n\t Enter The Elements Of Array (in ascending order) : "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"\t\t";
		cin>>arr[i];
	}

	do
	{
	cout<<"\n\n\t +-+-+-+-+-+-+-+- -x-x-x-x-x-x-x-x- -+-+-+-+-+-+-+-+";
	cout<<"\n\t Enter The Element To Insert : ";
	cin>>ins;

	if(size==50)
	{
		cout<<"\n\t Array Overflow !!";
		exit(0);
	}

	pos=FindPos(arr,size,ins);

// ...  Shifting Index  ...
	for(i=size;i>pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=ins;
	size+=1;

	cout<<"\n\t After Inserting Element, Sorted Array Is...";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n\t --------------------------------------------------";
	cout<<"\n\t Do You Want To Insert More Elements (y/n) ? : ";
	cin>>cont;
	}while(cont=='y' || cont=='Y');
}