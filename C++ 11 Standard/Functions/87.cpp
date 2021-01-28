//PROGRAM - 87
/*Define a function which compute SI.
  (i) to apply 10% interest to principal amount.
  (ii) for withdraw amount.               */

#include<iostream.h>
void withdraw(float pr,float tim)
 {
  float newp,w,si;
  si=(pr*10*tim)/100;
  cout<<"\n\n Enter The Amount You Want To Withdraw From New Principal Amount(in Rs.) :";
  cin>>w;
  newp=si+pr;
  cout<<"\n\n After Withdrawing, The Amount Left In Principal Amount Is (in Rs.) : "<<(newp-w);
  cout<<"\n   -------------------------------------------------------------------";
 }

void calsi(float p,float t)
 {
  float si,newp;
  si=(p*10*t)/100;
  cout<<"\n The SI For The Principal Amount Rs. "<<p<<" And Time Period "<<t<<" Years Is Rs. "<<si;
  newp=si+p;
  cout<<"\n\n Now New Principal Amount Is Rs. "<<newp;
  cout<<"\n   -------------------------------------------------------------------";
 }

void main()
 {
  float pri,ti;
  cout<<"\n Enter The Principal Amount (in Rs.) : ";
  cin>>pri;
  cout<<"\n Enter Time Period (in years) : ";
  cin>>ti;
  calsi(pri,ti);
  withdraw(pri,ti);
 }



