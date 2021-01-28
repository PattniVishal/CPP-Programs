//PROGRAM -- 21
//Data File Handling ... 5

#include<iostream.h>
#include<stdio.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,roll[3];
	float marks[3];
	char name[100],ch;

//*******************************************************************
	 ofstream fout;

	 fout.open("stu_mark.dat",ios::out);

		for(i=0;i<3;i++)
		 {
		  cout<<"\n\t ==> Enter Marks Of Student "<<i+1<<" ...";
		  cin>>marks[i];
		  fout<<"\n\t Marks Of Student "<<i+1<<" ..."<<marks[i];
		 }

	fout.close();
//**********************************************************************
//*******************************************************************
	 fout.open("stu_name.dat",ios::out);

	  cout<<endl<<endl;
		for(i=0;i<3;i++)
		 {
		  cout<<"\n\t *** Enter Name Of Student "<<i+1<<" ...";
		  gets(name);
		  fout<<"\n\t Name Of Student "<<i+1<<" : "<<name;
		 }

	 fout.close();
//**********************************************************************

//**********************************************************************
	ifstream fin1,fin2;

	fin1.open("stu_mark.dat",ios::in | ios::binary);
	fin2.open("stu_name.dat",ios::in | ios::binary);

	cout<<"\n\t The Contents of 'stu_mark.dat' & 'stu_name.dat' Are .....";
	fin2.seekg(0);
	  for(int j=0;j<3;j++)
		{
		  cout<<"\n\t Marks Of Student "<<j+1<<" : "<<marks[j];
		  fin1>>marks[j];
		  fin2.get(ch);
		  fin2.get(name,100);
		  cout<<endl;
		  cout.write(name,strlen(name));
		}
	fin1.close();
	fin2.close();
}




