/*     _ +-------------------------------------------+ _
		/o)|                  Pattni                   |(o\
	  / / |                  Vishal                   | \ \
	 ( (_ |  _                 J.                  _  | _) )
	((\ \)+-/o)-----------------------------------(o\-+(/ /))
	(\\\ \_/ /                                     \ \_/ ///)
	 \      /                                       \      /
	  \____/                                         \____/            */
// S U M M E R  A S S I G N M E N T  -- 10
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

/* In the game of Hangman, the computer chooses a word at random from
  a given list of words. This word is the answer. The player then tries
  to guess the word, by guesing one letter at a time. Whenever the user
  guesses a letter that is in the answer, all occurances of that letter
  are revealed to the user. The game ends when the user has guessed every
  letter in the word, before he reaches the allowed number of strikes.
  This program is an interactive Hangman game.                       */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>

char movie[20]={"bhootnath","the spy next door","humshakals","kick","2 states","boss","the amazing spiderman","fugly","ironman",
					"holiday","highway","home alone","avengers","2012","johnny english","rambo","twilight","men in black","heropanti"};
char city[20]=("agra","surat","gandhinagar","daman","delhi","mumbai","pune","tiruvananthpuram","srinagar","amritsar","rajkot","nagpur",
					"nasik","indore","ooty","chennai","hyderabad","bangalore","mangalore","baroda"};
char country[20]={"india","america","russia","china","bhutan","bangladesh","brazil","chile","uruguay","south afric","malaysia","japan",
						"pakistan","afghanistan","hongkong","guatemala","spain","england","australia","west indies"};


void City()
  {
	 randomize();
	 a=random(city


void Guess(int l,char word[])
	 {
			char let,newword[15]={0},star[50]={0};
			int pos,life=1,i,len,flag;

		cout<<"\n\t\t --- You Have To Guess This Word ---"<<endl<<endl<<setw(30);
				for(int k=0;k<l;k++)
				  {
					 cout<<"* ";
					 strcpy(star,"*");
				  }

				while(life<=5 && strcmp(newword,word)!=0)
				 {
				  flag=0;
				  cout<<"\n\n\t\t Enter Your Guessed Letter : ";
				  cin>>let;
				  clrscr();
				  for(i=0;i<l;i++)
					 {
						if(word[i]==let)
						 {
							pos=i+1;
							newword[i]=word[i];
							star[i]=let;
							cout<<"\n\t\t You Guessed "<<pos<<" th Letter..";
							flag=1;
						 }
					 }

						cout<<"\n\t\t --- You Have To Guess This Word ---"<<endl<<endl<<setw(30);
						for(int k=0;k<l;k++)
							{
							  cout<<star[k];
							}

						 if(!flag)
							{
							 life+=1;
							 cout<<"\n\n\t\t Wrong Guess... Try Again.";
							 cout<<"\n\t\t "<<6-life<<" Chances Left..";
							}

				 }
						 if(life>5)
						  {
							 cout<<"\n\t\t Sorry You Lost !!";
							 cout<<"\n\t\t Better Luck Next Time..";
						  }
						 else
						  {
							 cout<<"\n\n\t\t *****************************";
							 cout<<"\n\n\t\t       Congratulations !!";
							 cout<<"\n\t\t           You Win !!";
							 cout<<"\n\n\t\t *****************************";
						  }
	 }



void main()
		{
			char ch,word[15]={0};
			int l;

			cout<<"\n\t\t ||---====== ********* ======---||";
			cout<<"\n\t\t ||                             ||";
			cout<<"\n\t\t ||            T H E            ||";
			cout<<"\n\t\t ||                             ||";
			cout<<"\n\t\t ||        H A N G M A N        ||";
			cout<<"\n\t\t ||                             ||";
			cout<<"\n\t\t ||           G A M E           ||";
			cout<<"\n\t\t ||                             ||";
			cout<<"\n\t\t ||---====== ********* ======---||";
			cout<<"\n\n\t\t Please Select The Category (1-4)..";
			cout<<"\n\t\t 1. Country Name.";
			cout<<"\n\t\t 2. City Name.";
			cout<<"\n\t\t 3. Movie Name.";
			cout<<"\n\t\t 4. Exit.";
			cin>>ch;
			  switch(ch);
				 {
					case 1:
					  City();
					  break;
					case 2:
					  Country();
					  break;
					case 3:
					  Movie();
					  break;
					case 4:
					  exit(0);
					  break;
					default:
					  break;
				 }

			  cout<<"\n\n\t\t Please Enter The Main  '' Word '' : ";
			  gets(word);
			  l=strlen(word);
			  Guess(l,word);
			  clrscr();
		}
