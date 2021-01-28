//PROGRAM -- 46
//Linked List, Queue And Stack
// Array - Stack - 05 ....
// " Stack As An Array "  ==  Pushing And Popping At Top

#include<iostream>
#include<process.h>
using namespace std;
const int size=50;

int Pushing(int A[],int &top,int n)                              // Pushing In A Stack
{
	if(top==size-1)
		return -1;
	else
	{
		top+=1;
		A[top]=n;
	}
	return 0;
}

void Popping(int A[],int &top)
{
	int temp;
	if(top==-1)
	{
		cout<<"\n\t     ERROR !! Stack Underflow ...";
		//exit(1);
	}
	else
	{
		temp=A[top];
		top-=1;
	}
}

void Display(int A[],int top)
{
	cout<<"\n\t\t => "<<A[top];
	for(int j=top-1;j>=0;j--)
	{
		cout<<"\n\t\t    "<<A[j];
	}
}

int main()
{
	int n,A[50],top=-1,push,pop;
	char cont,del;

	cout<<"\n\t **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**";
	cout<<"\n\t ||                    ARRAY                     ||";
	cout<<"\n\t ||               Stack As An Array              ||";
	cout<<"\n\t **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**";

	do
	{
		cout<<"\n\n\t Enter The Element Of Array : ";
		cin>>n;
		push=Pushing(A,top,n);
		if(push==-1)
		{
			cout<<"\n\t ERROR !! Stack Overflow....";
			//exit(1);
		}
		cout<<"\n\t Now The Stack Is ......";
		Display(A,top);
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
			Popping(A,top);

		cout<<"\n\t After Popping, The Stack Is ....";
		if(top!=-1)
		{
			Display(A,top);
		}
		else
		{
         cout<<"\n\t\t EMPTY ...";
			cout<<"\n\n\t     ERROR !! Stack Underflow ...";
			//exit(1);
		}
	}while(del=='y' || del=='Y');

	cout<<"\n\t\t !!!  EXITING  !!!";
	return 0;
}
