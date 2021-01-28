//PROGRAM -- 20
// Data File Handling ... 4

#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>

void main()
 {
	int i,roll[3];
	float marks[3];
	char name[100],ch;


 //---------------------------  MARKS
//*******************************************************************

	 ofstream fout;

	 fout.open("stumarks.dat",ios::out);

		for(i=0;i<3;i++)
		 {
		  cout<<"\n\t Enter Marks Of Student "<<i+1<<" ...";
		  cin>>marks[i];
		  fout<<"\n\t Marks Of Student "<<i+1<<" ..."<<marks[i];
		 }

	fout.close();
//**********************************************************************
//*******************************************************************

	 ifstream fin;

	 fin.open("stumarks.dat",ios::in);

		  cout<<"\n\t Displaying Marks ..........";
		for(i=0;i<3;i++)
		 {
		  cout<<"\n\t Marks Of Student "<<i+1<<" : "<<marks[i];
		  fin>>marks[i];
		 }

	 fin.close();
//**********************************************************************

//---------------------------  NAME

//*******************************************************************

	 fout.open("stuname.dat",ios::out);

	  cout<<endl<<endl<<endl;
		for(i=0;i<3;i++)
		 {
		  cout<<"\n\t Enter Name Of Student "<<i+1<<" ...";
		  gets(name);
		  fout<<"\n\t Name Of Student "<<i+1<<" : "<<name;
		 }

	 fout.close();
//**********************************************************************
//*******************************************************************

	 fin.open("stuname.dat",ios::in);

	 fin.seekg(0);
	 cout<<"\n\t Displaying Name ...........";
		for(i=0;i<3;i++)
		 {
		  fin.get(ch);
		  fin.get(name,100);
		  cout<<endl;
		  cout.write(name,strlen(name));
		 }

		fin.close();
//**********************************************************************
 }