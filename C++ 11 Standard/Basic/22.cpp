#include<iostream.h>
#include<process.h>
void main()
{
  float temp,dist,h;
  int ch;
  char a;
  do
	{
  cout<<"\n Conversion Menu.."
		<<"\n 1. Convert Temperature (Celsius to Kelvin).."
		<<"\n 2. Convert Distance (Meter to Kilometer).."
		<<"\n 3. Convert Height (Inches to Feet).."
		<<"\n 4. Exit..";
  cin>>ch;
  switch(ch)
	 {
		case 1:
		cout<<"\n Enter Celsius Temperature : ";
		cin>>temp;
		cout<<"\n Its Kelvin Conversion Is : "<<temp+273.15;
		break;
		case 2:
		cout<<"\n Enter Distance In Meter : ";
		cin>>dist;
		cout<<"\n Its Kilometer Conversion Is : "<<dist/1000;
		break;
		case 3:
		cout<<"\n Enter Height In Inches : ";
		cin>>h;
		cout<<"\n Its Feet Conversion Is : "<<h/12;
		break;
		case 4:
		exit(0);
		break;
		default:
		cout<<"\n Wrong Choice....";
		break;
	 }
  cout<<"\n Press 'Y' for Continue... 'N' for Stopping..";
  cin>>a;
  }  while(a=='Y' || a=='y');
}