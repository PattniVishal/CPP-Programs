//PROGRAM -- 23
//Data File Handling ... 7

#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<process.h>

void main()
{
	int count=0,i;
	char ch[70],str;

	ifstream fin;
	fin.open("vishal2.txt",ios::in | ios::trunc);

	if(!fin)
	{
		cout<<"\n\t File Not Found !! ";
		exit(0);
	}

	cout<<"\n\t .....The Text In The Notepad File Is As Follows....."<<endl;
	cout<<"\n==>  ";
	fin.seekg(0);
	while(!fin.eof())
	{
		fin>>ch;
		if(strcmpi(ch,"to")==0)
				count++;
	}

	fin.seekg(0,ios::beg);
	while(!fin.eof())
	{
		fin.get(str);
		if(str=='\n')
		  cout<<"\n";
		if(str==' ')
		  cout<<" ";
		else
		  cout<<str;
	}

	cout<<"\n\n\t The Are "<<count<<" 'to' Word In The Sentence.";

	fin.close();
}