// PROGRAM -- 16
// Linked List,Stack & Queue --- Circular Queue.

#include<iostream.h>
#include<process.h>
#include<conio.h>

const int size=10;

int Pushing(int A[],int n,int &top,int &end)
{
	if((top==0 && end==size-1) || (top==end+1))
		return -1;
	if(top==-1)
		end=top=0;
	else
	{
		if(end==size-1)
			end=0;
		else
			end+=1;
	}
	A[end]=n;
	return 0;
}

int Popping(int A[],int &top,int &end)
{
	int temp;
	if(top==-1)
		return -1;
	if(top==end)
		top=end=-1;
	else
	{
		temp=A[top];
		if(top==size-1)
			top=0;
		else
			top+=1;
	}
	return temp;
}

void Display(int A[],int top,int end)
{
	cout<<"\n\t .......Circular Queue Is....... "<<endl<<"\t\t";
	if(top==-1)
	{
		cout<<"\n\n\t Queue Is Empty ...";
		return ;
	}
	if(end>=top)
	{
		while(top<=end)
		{
			cout<<A[top]<<" ";
			top+=1;
		}
	}
	else
	{
		while(top<=size-1)
		{
			cout<<A[top]<<" ";
			top+=1;
		}
		top=0;
		while(top<=end)
		{
			cout<<A[top]<<" ";
			top+=1;
		}
	}
}

void main()
{
	int A[size],top=-1,end=-1,n,ch,push,pop;
	do
	{
		clrscr();
		cout<<"\n\t\t <=======  Circular Queue Menu  =======>";
		cout<<"\n\t\t     1. Insert.";
		cout<<"\n\t\t     2. Delete.";
		cout<<"\n\t\t     3. Display.";
		cout<<"\n\t\t     4. Exit.";
		cout<<"\n\t\t Please Enter Your Choice (1 - 4) :.  ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n\t-------------------------------------------------------";
				cout<<"\n\n\t===> Enter The Element To Insert : ";
				cin>>n;
				push=Pushing(A,n,top,end);
				if(push==-1)
					cout<<"\n\n\t Queue Overflow !! Please Delete Some Elements ..";
				else
					Display(A,top,end);
				cout<<"\n\t-------------------------------------------------------";
				break;
			case 2:
				cout<<"\n\t-------------------------------------------------------";
				pop=Popping(A,top,end);
				if(pop==-1)
				{
					cout<<"\n\t Queue Underflow !! Please Enter Some Elements ..";
				}
				cout<<"\n\n\t===> Element Deleted Is : "<<pop<<endl;
				Display(A,top,end);
				cout<<"\n\t-------------------------------------------------------";
				break;
			case 3:
				cout<<"\n\t-------------------------------------------------------";
				Display(A,top,end);
				cout<<"\n\t-------------------------------------------------------";
				break;
			case 4:
				cout<<"\n\n\n\t --->  End Of Circular Queue Program  <---";
				exit(0);
			default:
				cout<<"\n\t Please Enter Valid Choice. ";
				break;
		}
		cout<<"\n\n\n\t Press Enter To Continue ..";
		getch();
	}while(ch!=4);
}
