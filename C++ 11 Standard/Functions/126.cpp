//PROGRAM - 126
/* Prepare invoice for following data
	Customer No., Date Of Sale, Quantity, Unit Price, Discount %.    */

#include<iostream.h>
#include<stdio.h>
struct invoice
	 {
		int cno,q;
		float pri;
		char dat[10];
	 }in;
void main()
{
  float sum=0,dis;
  cout<<"\n\t ***** Welcome To Star Bazaar ***** ";
  cout<<"\n Please Fill The Below Details ...";
  cout<<"\n Enter The Customer Number : ";
  cin>>in.cno;
  cout<<"\n Enter The Date Of Sale (DD MM YYYY) : ";
  gets(in.dat);
  cout<<"\n Enter The Quantity Of Product : ";
  cin>>in.q;
  cout<<"\n Enter The Price Per Item : ";
  cin>>in.pri;
	 sum=(in.pri*in.q);
	 dis=(sum/100)*5;
	 if(sum>=2000)
		 cout<<"\n Your Bill After 5 % Discount Is Rs. "<<(sum-dis);
	 else
		 cout<<"\n Your Bill Is Rs. "<<sum;
  cout<<"\n\t Thanks. Visit Again..";
}
