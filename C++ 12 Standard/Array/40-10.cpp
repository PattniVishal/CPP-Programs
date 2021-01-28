//PROGRAM -- 40
//Array - Merging : A-ascending ... 10
//                  B-descending
//                  C-descending


#include<iostream.h>
#include<process.h>
#include<conio.h>

//  .....  Function For Merging Two Arrays  .....
void Merge_Dsc(int A[],int B[],int m,int n,int C[])
{
	int a,b,c;
	a=m-1;
	b=0;
	c=0;
	while(a>=0 && b<n)
	{
		if(A[a]<=B[b])
		 C[c++]=B[b++];
		else
		 C[c++]=A[a--];
	}
	if(a>=0)
	{
		while(a>=0)
		 C[c++]=A[a--];
	}
	else
	{
		while(b<=n)
		 C[c++]=B[b++];
	}
}

void main()
{
	int A[50],B[50],C[50],m,n,l,i;
	char cont;

	do
	{
	cout<<"\n\t\t     ============= ----------- =============";
	cout<<"\n\t\t     ||          Merging Part - 3         ||";
	cout<<"\n\t\t     ||          A - Ascending            ||";
	cout<<"\n\t\t     ||          B,C - Descending         ||";
	cout<<"\n\t\t     ============= ----------- =============";
	cout<<"\n\n\t Enter The Size Of Array 'A' : ";
	cin>>m;
	cout<<"\n\t Enter The Elements Of Array 'A' (Ascending) ...."<<endl;
	for(i=0;i<m;i++)
	{
		cout<<"\t\t";
		cin>>A[i];
	}
	cout<<"\n\n\t Enter The Size Of Array 'B' : ";
	cin>>n;
	cout<<"\n\t Enter The Elements Of Array 'B' (Descending) ...."<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"\t\t";
		cin>>B[i];
	}
	l=m+n;

	Merge_Dsc(A,B,m,n,C);

	cout<<"\n\t  NOW,";
	cout<<"\n\n\t *** The Merged Array In Descending Order Is ..... "<<endl;
	cout<<"\t\t";
	for(int z=0;z<l;z++)
	{
		cout<<C[z]<<" ";
	}

	cout<<"\n\n\t Do You Want To Merge Another Array ? (Y/N) : ";
	cin>>cont;
	clrscr();
	}while(cont=='y' || cont=='Y');
	cout<<"\n\n\t\t !!!!!   EXITING   !!!!!";
}