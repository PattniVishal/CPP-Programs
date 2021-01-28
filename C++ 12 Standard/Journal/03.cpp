// PROGRAM -- 3
// CLOTHING class with constructor & destructor.

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

class CLOTHING
	{
	  private:
		 int size;
		 char cod[20],type[20],mat[20];
		 float price;
		 void Cal_Price()
			{
			  char mate[20],typ[20];
			  int i;
			  for(i=0;i<20;i++)
				{
				 mate[i]=tolower(mat[i]);
				 typ[i]=tolower(type[i]);
				}
				if((strcmp(mate,"cotton")==0))
				  {
					 if((strcmp(typ,"trousers")==0))
						price=1500;
					 else if((strcmp(typ,"shirt")==0))
						price=1200;
					 else
						cout<<"\n\t Not Defined.";
				  }
				else
				  {
					 if((strcmp(typ,"trousers")==0))
						price=(1500*75)/100;
					 else if((strcmp(typ,"shirt")==0))
						price=(1200*75)/100;
					 else
						cout<<"\n\t Not Defined.";
				  }
			}
	  public:
		 CLOTHING()
			{
			  strcpy(cod,"NOT ASSIGNED");
			  strcpy(type,"NOT ASSIGNED");
			  strcpy(mat,"NOT ASSIGNED");
			}
		 void Enter()
			{
			  cout<<"\n\n\t\t Enter The Cloth Code : ";
			  gets(cod);
			  cout<<"\n\t\t Enter The Material Of Cloth (Cotton/Silk) : ";
			  gets(mat);
			  cout<<"\n\t\t Enter The Product Type (Trousers/Shirt) : ";
			  gets(type);
			  cout<<"\n\t\t Enter The Size Of "<<type<<" : ";
			  cin>>size;
			}
		 void Display()
			{
			  cout<<"\n\n\t\t Cloth Code : "<<cod;
			  cout<<"\n\t\t Material Of Cloth : "<<mat;
			  cout<<"\n\t\t Product Type : "<<type;
			  cout<<"\n\t\t Size Of "<<type<<" : "<<size;
			  Cal_Price();
			  cout<<"\n\t\t Price Of One "<<type<<" Is Rs. "<<price;
			}
	}c;

void main()
  {
	 cout<<"\n\n\t\t WELCOME..";
    CLOTHING();
	 c.Enter();
	 c.Display();
  }

