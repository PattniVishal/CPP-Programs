//Enter roll number, name and two subject marks and display the result.
#include <iostream>
#include <conio>

using namespace std;

void main()
{
int rollno;
char name[20];
float m1,m2;
cout<<"\n Enter Your Name :- ";
cin>>name;
cout<<"\n Enter Your Roll Number :- ";
cin>>rollno;
cout<<"\n Enter Marks In Two Subjects :- ";
cin>>m1>>m2;
cout<<"\n Your Total Marks = "<<m1+m2;
getch();
}