// WAP to enter any number and find its equivalent binary.

#include<iostream.h>
void main()
{
	int no,i,k=1;
	cout<<"\n Enter A Number Whose You Want To Find Binary Number : ";
	cin>>no;
	cout<<endl;
	int bi[8];
	for(i=0;i<=7;i++)
	{
		bi[i]=(no%2);
		no=(no/2);
		if(no>=1)
		k++;                                       //no. of binary digits
	}
	cout<<"Its Binary Code Is  ";
	if(k<=3)                                      //for no. having first binary digit '0'
	cout<<0;
	for(i=(k-1);i>=0;i--)
	{
		cout<<bi[i];
	}
}