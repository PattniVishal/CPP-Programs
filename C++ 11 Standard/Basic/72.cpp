//PROGRAM - 72
/*To check whether the character is alphabet or not. If it is an alphabet then check whether
  it is lowercase or uppercase. If it is lowercase convert to uppercase and vice versa.   */

#include<iostream.h>
#include<ctype.h>
void main()
{
  char a;
  cout<<"\n Enter Any Character From Keyboard : ";
  cin>>a;
	 if(isalpha(a))
		{
		 if(islower(a))
			{
			cout<<"\n It Is Lowercase...";
			cout<<"\n Its Uppercase Is "<<char(toupper(a));
			}
		 else
			{
			cout<<"\n It Is Uppercase...";
			cout<<"\n Its Lowercase Is "<<char(tolower(a));
			}
		 }
	 else
		 {
		 cout<<"\n Not An Alphabet...";
		 }
}
