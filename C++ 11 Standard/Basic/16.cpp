/*WAP to read character and display message, if lowercase entered then display its corresponding
uppercase and vice versa. If not alphabet entered, then dispaly appropriate message. */
#include<iostream.h>
void main()
{
char a;
int b;
a=int(b);
cout<<"\n Enter Any Alphabet : ";
cin>>a;
if(a>=97 && a<=122)
 {
  cout<<"\n You Entered Lowercase Alphabet. ";
  cout<<"\n Its Uppercase Is "<<char(a-32);
 }
else if(a>=65 && a<=90)
 {
  cout<<"\n You Entered Uppercase Alphabet. ";
  cout<<"\n Its Lowercase Is "<<char(a+32);
 }
else
 {
  cout<<"\n Invalid Entry...";
 }
}
