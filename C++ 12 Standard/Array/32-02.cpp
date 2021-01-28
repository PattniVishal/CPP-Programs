//PROGRAM -- 32
//Array - Binary Search ... 2

#include<iostream.h>


//  .....  Function For Binary Search  .....
void Bsearch(int arr[],int size,int ser)
{
	int beg=0,mid,last=size-1;
	int flag=0;
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(ser==arr[mid])
		{
			flag=1;
			cout<<"\n\t Element Found At..";
			cout<<"\n\t  ==> Index : "<<mid;
			cout<<"\n\t  ==> Position : "<<mid+1;
			break;
		}
		else if(ser>arr[mid])
			beg=mid+1;
		else
			last=mid-1;
	}
	if(!flag)
      cout<<"\n\t ERROR !! Element Not Found..";
}

void main()
{
	int arr[30],size,ser;
	cout<<"\n\t\t     ============= ---------- =============";
	cout<<"\n\t\t     ||    Binary Search In 1-D Array    ||";
	cout<<"\n\t\t     ============= ---------- =============";
	cout<<"\n\n\t Enter The Size Of Array : ";
	cin>>size;
	cout<<"\n\t Enter The Elements (in ascending order) : "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"\t\t";
		cin>>arr[i];
	}
	cout<<"\n\n\t ========== ========== ==========";
	cout<<"\n\t Enter The Element To Search : ";
	cin>>ser;

	Bsearch(arr,size,ser);
}