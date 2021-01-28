// PROGRAM -- 23
// Array --- Merging two arrays.
//  A-ascending + B-descending = C-ascending

#include<iostream.h>
#include<process.h>
#include<conio.h>

//  .....  Function For Merging Two Arrays  .....
void Merge_Asc(int A[],int B[],int m,int n,int C[])
{
	int a,b,c;
	a=0;
	b=n-1;
	c=0;
	while(a<=m && b>=0)
	{
		if(A[a]<=B[b])
		 C[c++]=A[a++];
		else
		 C[c++]=B[b--];
	}
	if(a<m)
	{
		while(a<m)
		 C[c++]=A[a++];
	}
	else
	{
		while(b>=0)
		 C[c++]=B[b--];
	}
}

void main()
{
	int A[50],B[50],C[50],m,n,l,i;
	char cont;

	do
	{
	cout<<"\n\t\t     ============= ----------- =============";
	cout<<"\n\t\t     ||           Merging  Part           ||";
	cout<<"\n\t\t     ||          A,C - Ascending          ||";
	cout<<"\n\t\t     ||          B - Descending           ||";
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

	Merge_Asc(A,B,m,n,C);

	cout<<"\n\t  NOW,";
	cout<<"\n\n\t *** The Merged Array In Ascending Order Is ..... "<<endl;
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