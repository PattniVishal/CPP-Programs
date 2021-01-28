//PROGRAM -- 18
// Data File Handling ... 2

#include<iostream.h>
#include<fstream.h>
void main()
 {
	int i,roll[3];
	float marks[3];

//****************** inputing details ******************************

	 ofstream fout;

	 fout.open("stud.dat",ios::out);

	  fout<<"\n\t\t ---------- W E L C O M E ----------";
	  fout<<"\n\t\t |||        S.H.V. SCHOOL        |||";
	  fout<<"\n\t\t |||     Result Revealing Day    |||";
	  fout<<"\n\t\t -----------------------------------";

		for(i=0;i<3;i++)
		 {
		  cout<<"\n\t\t Enter Details Of Student "<<i+1<<" ...";
		  cout<<"\n\n\t\t Enter Your Roll Number : ";
		  cin>>roll[i];
		  cout<<"\n\t\t Enter Your Marks : ";
		  cin>>marks[i];
		  fout<<"\n\n\t\t Details Of Student "<<i+1<<" ...";
		  fout<<"\n\t\t Your Roll Number : "<<roll[i];
		  fout<<"\n\t\t Your Marks Is : "<<marks[i];
		 }

	  fout<<"\n\t\t ----- T H A N K   Y O U -----";
		fout.close();
//**********************************************************************


//****************** displaying details ********************************

	 ifstream fin;

	 fin.open("stud.dat",ios::in);

	  fin>>"\n\t\t ---------- W E L C O M E ----------";
	  fin>>"\n\t\t |||        S.H.V. SCHOOL        |||";
	  fin>>"\n\t\t |||     Result Revealing Day    |||";
	  fin>>"\n\t\t -----------------------------------";

		for(i=0;i<3;i++)
		 {
		  cout<<"\n\n\t\t Details Of Student "<<i+1<<" ...";
		  cout<<"\n\t\t Your Roll Number : "<<roll[i];
		  cout<<"\n\t\t Your Marks Is : "<<marks[i];
		  fin>>"\n\n\t\t Details Of Student ">>i+1>>" ...";
		  fin>>"\n\t\t Your Roll Number : ">>roll[i];
		  fin>>"\n\t\t Your Marks Is : ">>marks[i];
		 }

	  fin>>"\n\t\t ----- T H A N K   Y O U -----";

		fin.close();
//**********************************************************************
 }