//PROGRAM -- 24
//Data File Handling ... 8

#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<process.h>

void main()
{
//	int ;
	char ch[70],ch2[70];

	ifstream fin;
	fin.open("vishal3.txt",ios::in);

	while(!fin)
	{
		cout<<"\n\t File Not Found !! ";
		break;
	}

	fin.seekg(0);
	while(!fin.eof())
	{
		fin>>ch;
		for(int i=0;i<strlen(ch);i++)
		{
//			if(isalpha(ch[i]))
//			{
				if(ch[i]==' ')
				{
					ch2[i]=toupper(ch[i+1]);
				}
				else
				{
					ch2[i]=ch[i];
				}
//			}
		}

		if(ch=="\n")
		  cout<<" ";
		if(ch==" ")
		  cout<<" ";
		else
		  cout<<ch2;
	}

	fin.close();
}
