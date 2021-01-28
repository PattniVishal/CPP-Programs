// PROGRAM -- 13
// Linked List,Stack & Queue --- Queue as an Array.

#include<iostream.h>
#include<process.h>

const int size=50;

int Pushing(int A[],int n,int &end,int &top)                              // Pushing In A Stack
{
	if(end==size-1)
		return -1;
	else if(end==-1)
	{
		top=end=0;
		A[end]=n;
	}
	else
	{
		end+=1;
		A[end]=n;
	}
	return 0;
}

void Popping(int A[],int &end,int &top)
{
	int temp;
	if(top==-1)
	{
		cout<<"\n\t     ERROR !! Queue Underflow ...";
		exit(0);
	}
	else
	{
		temp=A[top];
		if(top==end)
			top=end=-1;
		else
			top+=1;
	}
}

void Display(int A[],int top,int end)
{
	for(int j=top;j<end;j++)
	{
		cout<<"\n\t\t    "<<A[j];
	}
	cout<<"\n\t\t => "<<A[end];
}

void main()
{
	int n,A[50],top=-1,end=-1,push,pop;
	char cont,del;

	cout<<"\n\t **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**";
	cout<<"\n\t ||                    ARRAY                     ||";
	cout<<"\n\t ||               Queue As An Array              ||";
	cout<<"\n\t **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**";

	do
	{
		cout<<"\n\n\t Enter The Element Of Array : ";
		cin>>n;
		push=Pushing(A,n,end,top);
		if(push==-1)
		{
			cout<<"\n\t ERROR !! Queue Overflow....";
			exit(0);
		}
		cout<<"\n\t Now The Queue Is ......";
		Display(A,top,end);
		cout<<"\n-------------------------------------------------------------------------------";
		cout<<"\n\n\t Do You Want To Enter More Elements (Y/N) ? : ";
		cin>>cont;
		cout<<"\n-------------------------------------------------------------------------------";
	}while(cont=='y' || cont=='Y');

	do
	{
		cout<<"\n-------------------------------------------------------------------------------";
		cout<<"\n\n\t Do You Want To Delete Top Element ? (Y/N) : ";
		cin>>del;
		cout<<"\n-------------------------------------------------------------------------------";
		if(del=='y' || del=='Y')
			Popping(A,end,top);

		cout<<"\n\t After Popping, The Queue Is ....";
		if(top!=-1)
		{
			Display(A,top,end);
		}
		else
		{
			cout<<"\n\t\t EMPTY ...";
			cout<<"\n\n\t     ERROR !! Queue Underflow ...";
			exit(0);
		}
	}while(del=='y' || del=='Y');

	cout<<"\n\t\t !!!  EXITING  !!!";
}