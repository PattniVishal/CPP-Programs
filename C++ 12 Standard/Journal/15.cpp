// PROGRAM -- 15
// Linked List,Stack & Queue --- Queue as a Linked List.

#include<iostream.h>
#include<process.h>

struct node                                            // Structure
{
	int info;
	node *next;                                         // Self - Refrential Structure
}*start,*newp,*temp,*ptr,*temp1,*rear;

node *Create_New_Node(int n)                           // Creating New Node In Heap Memory
{
	ptr=new node;
	ptr->info=n;
	ptr->next=NULL;
	return ptr;
}

void Insert_End(node *np)                               // Inserting Info At First Position
{
	if(start==NULL)
		start=rear=np;
	else
	{
		rear->next=np;
		rear=np;
	}
}

void Del_Beg()                                          // Deleting The Node
{
	if(start==NULL)
	{
		cout<<"\n\n\t ==> Underflow ...";
		exit(0);
	}
	else
	{
		temp1=start;
		start=start->next;
		delete temp;
	}
}

void Display(node *np)                                  // Displaying The Info
{
	while(np!=NULL)
	{
		cout<<"\t\t -> "<<np->info<<endl;
		np=np->next;
	}
}

void main()
{
	start=rear=NULL;
	int inf;
	char cont,del;

	cout<<"\n\t **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**";
	cout<<"\n\t ||                 LINKED LIST                  ||";
	cout<<"\n\t ||             Queue As Linked List             ||";
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

		cout<<"\n\n\t Now, The QUEUE Is ....."<<endl;
		Display(start);


	  cout<<"\n\n-----------------------------------------------------------------------------";

	cout<<"\n\n\t ==> Do You Want To Continue Inserting New Node (Y/N) ? ";
	cin>>cont;
	  cout<<"\n-----------------------------------------------------------------------------";
	}while(cont=='y' || cont=='Y');

	do
	{
		cout<<"\n\n\t Now, The QUEUE Is ....."<<endl;
		Display(start);

		cout<<"\n-------------------------------------------------------------------------------";
		cout<<"\n\n\t Do You Want To Delete First Node (Y/N) ? : ";
		cin>>del;
		cout<<"\n-------------------------------------------------------------------------------";
		if(del=='y' || del=='Y')
			Del_Beg();
	  cout<<"\n-----------------------------------------------------------------------------";
	}while(del=='y' || del=='Y');
}