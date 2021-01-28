#include<iostream.h>
void main()
{
float a,b,c,lar;
cout<<"\n Enter Any 3 Numbers  : ";
cin>>a>>b>>c;
lar=(a>b&&a>c)?a:(b>c&&b>a)?b:(c>a&&c>b)?c:c;
cout<<"\n The Largest Of 3 Is "<<lar;
}