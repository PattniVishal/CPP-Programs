//PROGRAM -- 22
//Data File Handling ... 6

#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<process.h>

void main()
{
	int count=0;
	char ch;

	ifstream fin;
	fin.open("vishal.txt",ios::in | ios::trunc);

   if(!fin)
	{
		cout<<"\n\t File Not Found !! ";
		exit(0);
	}

	cout<<"\n\t .....The Text In The Notepad File Is As Follows....."<<endl;
	cout<<"\n==> ' ";
	fin.seekg(0);
	while(fin)
	{
		fin.get(ch);
		if(ch=='\n')
		  cout<<" ";
		if(ch==' ')
		  cout<<" ";
		else
		  cout<<ch;

		if(isalpha(ch))
		{
			if(isupper(ch))
			  count++;
		}
	};
		cout<<" ' ";

	cout<<"\n\n\t The Are "<<count<<" Uppercase Letters.";

	fin.close();
}