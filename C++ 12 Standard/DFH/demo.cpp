#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<process.h>

void main()
{
	ifstream fin;
	fin.open("STORY.txt",ios::in);
	char word[30];
	int count=0;
	while(!fin.eof())
	{
		fin>>word;
		if(strcmpi(word,"the")==0)
			count++;
		cout<<word;
	}
	cout<<"\n\nNumber of 'the' word in file are "<<count;
	fin.close();
}