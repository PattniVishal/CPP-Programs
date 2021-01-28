//PROGRAM - 81
/*WAP to implement number guessing game. In this game computer chooses a random number
  between 1 to 100 and player try to guess the number in few attempts as possible.
  Each time player enters a guess, the computer tells him whether the guess is
  too high, too low or right. Once the player guesses the number, the game is over.      */

#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void main()
{
randomize();
	int a,o,i=1,z;
	z=random(100)+1;
	 cout<<"\n ********** Welcome To The Game Zone **********";
	 cout<<"\n\n";
	 cout<<"\n      ***** My Number Guessing Game *****";
	 cout<<"\n\n";
	coin:
	 cout<<"\n Please Enter 1 Rupee Coin For Playing...";
	 cin>>o;
		 if(o!=1)
			{
			  goto coin;
			}
	do
	 {
	  cout<<"\n Guess Any Number Between 1 - 100  :  ";
	  cin>>a;
		if(a>z)
		 {
		  cout<<"\n Too High !!";
		 }
		if(a<z)
		 {
		  cout<<"\n Too Low !!";
		 }
		if(a==z)
		 {
		  cout<<"\n ** CONGRATULATIONS :) !!!! **";
		  cout<<"\n You Guessed My Number Correctly..";
		  cout<<"\n You Guessed It In "<<i<<" Attempts..";
        cout<<"\n\n -------------------  GAME OVER  --------------------"; 
		 }
		 i++;
	  } while(a!=z);
}
