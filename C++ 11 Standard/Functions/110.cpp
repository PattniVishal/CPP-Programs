//PROGRAM - 110
//Program to find substring from main string.

#include<iostream.h>
#include<stdio.h>
#include<string.h>
void main()
{
  char mainstr[100],sub[40];
  int flag=0,i,j,pos;
  cout<<"\n Enter The Main String : ";
  gets(mainstr);
  cout<<"\n Enter The Sub-String To Find : ";
  gets(sub);
  for(int a=0;mainstr[a]!='\0';a++)
	{
	  for(i=a;mainstr[i]!='\0';i++)
		{
		  if(mainstr[i]==sub[0])
			{
			  pos=i;j=0;
			  while(mainstr[i]==sub[j])
				{
				 j++;
				 i++;
				}
			  if(j>=strlen(sub))
				{
				 flag=1;
				 break;
				}
			}

		}
		if(flag)
		  break;
	}
	if(flag)
	 cout<<"\n Sub-String Starts From "<<pos+1;
	else
	  cout<<"\n Sub-String Is Not Present In The String..";
}
