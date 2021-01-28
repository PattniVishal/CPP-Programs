//PROGRAM -- 17
// Data File Handling ... 1

#include<iostream.h>
#include<fstream.h>
void main()
 {
	int i,roll;
	float marks;

	 ofstream fout;

	 fout.open("student.dat",ios::out);

	  fout<<"\n\t\t ---------- W E L C O M E ----------";
	  fout<<"\n\t\t |||        S.H.V. SCHOOL        |||";
	  fout<<"\n\t\t |||     Result Revealing Day    |||";
     fout<<"\n\t\t -----------------------------------";

		for(i=0;i<3;i++)
		 {
		  cout<<"\n\t\t Enter Details Of Student "<<i+1<<" ...";
		  cout<<"\n\n\t\t Enter Your Roll Number : ";
		  cin>>roll;
		  cout<<"\n\t\t Enter Your Marks : ";
		  cin>>marks;
		  fout<<"\n\n\t\t Details Of Student "<<i+1<<" ...";
		  fout<<"\n\t\t Your Roll Number : "<<roll;
		  fout<<"\n\t\t Your Marks Is : "<<marks;
		 }

	  fout<<"\n\t\t ----- T H A N K   Y O U -----";

		fout.close();
 }
