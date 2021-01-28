/*     _ +-------------------------------------------+ _
		/o)|                  Pattni                   |(o\
	  / / |                  Vishal                   | \ \
	 ( (_ |  _                 J.                  _  | _) )
	((\ \)+-/o)-----------------------------------(o\-+(/ /))
	(\\\ \_/ /                                     \ \_/ ///)
	 \      /                                       \      /
	  \____/                                         \____/            */
// S U M M E R  A S S I G N M E N T  -- 11
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

/* This C++ program on TIC TAC TOE game is simple text based
  game. This program is without graphics to focus on logic/algorithm
  used in game. Two players can play this game.       */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>

char box[10]={'t','1','2','3','4','5','6','7','8','9'};

void Board();
int Winner();

void main()
	  {
		  char ch;
		  olx:
		  int pl=1,n,z,sym;
			  cout<<"\n\t  _=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_";
			  cout<<"\n\t ||                                             ||";
			  cout<<"\n\t ||                W E L C O M E                ||";
			  cout<<"\n\t ||          T I C  -  T A C  -  T O E          ||";
			  cout<<"\n\t ||                                             ||";
			  cout<<"\n\t ||_______________T H E  G A M E________________||"<<endl;
					 cout<<"\n\t Player 1, Select Your Symbol (1 / 2): ";
					 cout<<"\n     1.  'O'";
					 cout<<"\n     2.  'X'"<<endl<<"           ==> \t";
					 cin>>sym;
			  switch(sym)
				  {
					 case 1:
						do
						  {
							 cout<<"\n Player 1 ==>  'O'";
							 cout<<"\n Player 2 ==>  'X'"<<endl;
							 Board();
							 pl=(pl%2)?1:2;
							 again1:
							 cout<<"\n Player "<<pl<<", Enter The Number : ";
							 cin>>n;
							 ch=(pl==1)?'O':'X';
								 if(n==1 && box[1]=='1')
									box[1]=ch;

								 else if(n==2 && box[2]=='2')
									box[2]=ch;

								 else if(n==3 && box[3]=='3')
									box[3]=ch;

								 else if(n==4 && box[4]=='4')
									box[4]=ch;

								 else if(n==5 && box[5]=='5')
									box[5]=ch;

								 else if(n==6 && box[6]=='6')
									box[6]=ch;

								 else if(n==7 && box[7]=='7')
									box[7]=ch;

								 else if(n==8 && box[8]=='8')
									box[8]=ch;

								else if(n==9 && box[9]=='9')
									box[9]=ch;

								else
								 {
									cout<<"\n Invalid Move. Enter Again."<<endl;
									goto again1;
								 }
							 clrscr();
							 z=Winner();
							 pl=pl++;
						  }while(z==-1);
							Board();
							  if(z==1)
								{
								  cout<<"\n\t   ___________________________________________ ";
								  cout<<"\n\t  ||           !! Player "<<--pl<<" Wins !!           ||";
								  cout<<"\n\t  ||          !! CONGRATULATIONS !!          ||";
								  cout<<"\n\t   ------------------------------------------- "<<endl;
								}
							  if(z!=1)
								{
								  cout<<"\n\t\t !!    Sorry. No Result    !!";
								  cout<<"\n\t\t  !!      Game  Draw      !! ";
								}
								cout<<"\n      =====================================================";
								cout<<"\n     ||               A  P r o j e c t  B y               ||";
								cout<<"\n     ||                                                   ||";
								cout<<"\n     ||            'P a t t n i   V i s h a l'            ||";
								cout<<"\n      ============_____________________________============";

					 break;

					 case 2:
							 cout<<"\n Player 1 ==>  'X'";
							 cout<<"\n Player 2 ==>  'O'"<<endl;
						do
						  {
							 Board();
							 pl=(pl%2)?1:2;
							 again2:
							 cout<<"\n Player "<<pl<<", Enter The Number : ";
							 cin>>n;
							 ch=(pl==1)?'X':'O';
								 if(n==1 && box[1]=='1')
									box[1]=ch;

								 else if(n==2 && box[2]=='2')
									box[2]=ch;

								 else if(n==3 && box[3]=='3')
									box[3]=ch;

								 else if(n==4 && box[4]=='4')
									box[4]=ch;

								 else if(n==5 && box[5]=='5')
									box[5]=ch;

								 else if(n==6 && box[6]=='6')
									box[6]=ch;

								 else if(n==7 && box[7]=='7')
									box[7]=ch;

								 else if(n==8 && box[8]=='8')
									box[8]=ch;

								else if(n==9 && box[9]=='9')
									box[9]=ch;

								else
								 {
									cout<<"\n Invalid Move. Enter Again."<<endl;
									goto again2;
								 }
							 clrscr();
							 z=Winner();
							 pl=pl++;
						  }while(z==-1);
							Board();
							  if(z==1)
								if(z==1)
								{
								  cout<<"\n\t   ___________________________________________ ";
								  cout<<"\n\t  ||           !! Player "<<--pl<<" Wins !!           ||";
								  cout<<"\n\t  ||          !! CONGRATULATIONS !!          ||";
								  cout<<"\n\t   ------------------------------------------- "<<endl;
								}
							  if(z!=1)
								{
								  cout<<"\n\t\t !!    Sorry. No Result    !!";
								  cout<<"\n\t\t  !!      Game  Draw      !! ";
								}
								cout<<"\n      =====================================================";
								cout<<"\n     ||               A  P r o j e c t  B y               ||";
								cout<<"\n     ||                                                   ||";
								cout<<"\n     ||            'P a t t n i   V i s h a l'            ||";
								cout<<"\n      ============_____________________________============";

					 break;

					 default:
						cout<<"\n Invalid Chioce !!!";
						cout<<"\n Please Select 1/2.."<<endl;
						goto olx;
								cout<<"\n\t =======================================================";
								cout<<"\n\t ||               A  P r o j e c t  B y               ||";
								cout<<"\n\t ||            'P a t t n i   V i s h a l'            ||";
								cout<<"\n\t =======================================================";
					 break;
				  }
		}

void Board()
	  {
			cout<<endl;
			cout<<"\t\t\t     |     |     "<<endl;
			cout<<"\t\t\t  "<<box[1]<<"  |  "<<box[2]<<"  |  "<<box[3]<<endl;
			cout<<"\t\t\t_____|_____|_____"<<endl;
			cout<<"\t\t\t     |     |     "<<endl;
			cout<<"\t\t\t  "<<box[4]<<"  |  "<<box[5]<<"  |  "<<box[6]<<endl;
			cout<<"\t\t\t_____|_____|_____"<<endl;
			cout<<"\t\t\t     |     |     "<<endl;
			cout<<"\t\t\t  "<<box[7]<<"  |  "<<box[8]<<"  |  "<<box[9]<<endl;
			cout<<"\t\t\t     |     |     "<< endl<<endl;
	  }

int Winner()
	  {
		  if(box[1]==box[2] && box[2]==box[3])
			  return 1;
		  else if(box[4]==box[5] && box[5]==box[6])
			  return 1;
		  else if(box[7]==box[8] && box[8]==box[9])
			  return 1;
		  else if(box[1]==box[4] && box[4]==box[7])
			  return 1;
		  else if(box[2]==box[5] && box[5]==box[8])
			  return 1;
		  else if(box[3]==box[6] && box[6]==box[9])
			  return 1;
		  else if(box[1]==box[5] && box[5]==box[9])
			  return 1;
		  else if(box[3]==box[5] && box[5]==box[7])
			  return 1;
		  else if(box[1] != '1' && box[2] != '2' && box[3] != '3'
					&& box[4] != '4' && box[5] != '5' && box[6] != '6'
					&& box[7] != '7' && box[8] != '8' && box[9] != '9')
			  return 0;
		  else
			  return -1;
 }
