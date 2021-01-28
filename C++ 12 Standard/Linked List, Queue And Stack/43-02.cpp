//PROGRAM -- 43
//Linked List, Queue And Stack
// Linked List - Insertion At End - 02 ....

#include<iostream.h>
#include<process.h>

struct node                                           // Structure
{
	int info;
	node *next;
}*start,*newp,*temp,*ptr,*rear;

node *Create_New_Node(int n)                          // Creating New Node
{
	ptr=new node;
	ptr->info=n;
	ptr->next=NULL;
	return ptr;
}

void Insert_End(node *np)                             // Inserting New Node At End Of The List
{
	if(start==NULL)
		start=rear=np;
	else
	{
		rear->next=np;
		rear=np;
	}
}

void Display(node *np)                                // Displaying The Info
{
	while(np!=NULL)
	{
		cout<<np->info<<" <- ";
		np=np->next;
	}
}

void main()
{
	start=rear=NULL;
	int inf;
	char cont;

	cout<<"\n\t **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**";
	cout<<"\n\t ||                 LINKED LIST                  ||";
	cout<<"\n\t ||              Insertion At End                ||";
	cout<<"\n\t **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**";

	do
	{
	  cout<<"\n\n\t Enter The INFOrmation For New Node : ";
	  cin>>inf;

	  cout<<"\n\n\t .. Creating New Node In Heap Memory ......";
	  newp=Create_New_Node(inf);
	  if(newp!=NULL)
		  cout<<"\n\n\t ! !  Successfully Created New Node .....";
	  else
	  {
		  cout<<"\n\n\t ERROR ! Cannot Create New Node ... Exiting....";
		  exit(0);
	  }

	  cout<<"\n\n\t Wait... Inserting The New Node At End..";
	  Insert_End(newp);

	  cout<<"\n\n\t -->  Now, Your Linked List Is ...."<<endl<<endl;
	  cout<<"\t\t";
	  Display(start);

	  cout<<"\n\n-----------------------------------------------------------------------------";

	cout<<"\n\t ==> Do You Want To Continue Inserting New Node ? ";
	cout<<"\n\t         Y = yes  --------  N = no"<<endl<<"\t\t";
	cin>>cont;
	  cout<<"\n-----------------------------------------------------------------------------";
	}while(cont=='y' || cont=='Y');
}