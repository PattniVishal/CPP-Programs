//PROGRAM -- 9
//Accomplish the concept function which return object using class DISTANCE.

#include<iostream.h>

class DISTANCE
		 {
			private:
			 int feet;
			 int inch;
			public:
			 void Getinfo(int f, int i)
			  {
				feet=f;
				inch=i;
			  }
			 void Display()
			  {
				cout<<feet<<" Feet "<<inch<<" Inches.\n";
			  }
			 DISTANCE sum(DISTANCE d2);
		 };
		 DISTANCE DISTANCE::sum(DISTANCE d2)
		  {
			DISTANCE d3;
			d3.feet=feet+d2.feet+(inch+d2.inch)/12;
			d3.inch=(inch+d2.inch)%12;
			return(d3);
		  }
		 void main()
		  {
			 DISTANCE l1,l2,tot;
			 int ft1,ft2,ic1,ic2;
          char cont;
		  do
			{
			 cout<<"\n\t ^^^^^^^^  Distance Measurer  ^^^^^^^^";
			 cout<<"\n\n\t   -----  Length 1  -----";
			 cout<<"\n\t Enter Distance In Feet : ";
			 cin>>ft1;
			 cout<<"\t Enter Distance In Inches : ";
			 cin>>ic1;
			 l1.Getinfo(ft1,ic1);
			 cout<<"\n\n\t   -----  Length 2  -----";
			 cout<<"\n\t Enter Distance In Feet : ";
			 cin>>ft2;
			 cout<<"\t Enter Distance In Inches : ";
			 cin>>ic2;
			 l2.Getinfo(ft2,ic2);
			 tot=l1.sum(l2);
			 cout<<"\n\n\t *******  Displaying Result  *******";
			 cout<<"\n\t   Length 1 : ";
			 l1.Display();
			 cout<<"\t   Length 2 : ";
			 l2.Display();
			 cout<<"\t   Total Length : ";
			 tot.Display();
			 cout<<"\n\t Do You Want To Continue (Y/N) : ";
			 cin>>cont;
			}while(cont=='y' || cont=='Y');
		  }
