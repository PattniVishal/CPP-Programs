#include<iostream.h>
void main()
{
float teams;
int left,pl;
cout<<"\n Enter Numbers Of Players : ";
cin>>pl;
teams=pl/5;
left=pl%5;
cout<<"\n There Will Be "<<teams<<" Teams Formed. ";
cout<<"\n Number Of Players Leftover Are "<<left;
}