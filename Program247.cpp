//Binary Search Tree cha code.
//without flag code

#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node * lchild;
	struct node * rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head,int no)
{
	PNODE newn = new NODE;
	
	newn->data = no;
	newn->lchild = NULL;
	newn->rchild = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		PNODE temp = *Head;	//temporary ghetla	
		
		while(1)	//Unconditional Loop	//while(true)	// for(;;)
		{
			if(temp->data == no)	//data sarkha aasel tr
			{
				cout<<"Duplicate Node\n";
				
				delete newn;
				break;
				
			}
			else if(no < (temp->data) )	//no lahan = left la ja
			{
				if(temp-> lchild == NULL)
				{
					temp->lchild = newn;
					break;
				}
				temp = temp -> lchild;
			}
			else if(no > (temp->data) )	//no motha = right la ja
			{
				if(temp-> rchild == NULL)
				{
					temp->rchild = newn;
					break;
				}
				
				temp = temp -> rchild;	
			}
		}
	}	
}


bool Search(PNODE Head,int no)
{

	if(Head == NULL)	//tree is empty
	{
		return false;
	}
	else		//tree contains at least one node
	{
		while(Head != NULL)
		{
			if(Head -> data == no)		//node safdla
			{
				break;
			}
			else if(no > (Head -> data))	//data motha 
			{
				Head = Head->rchild;
			}
			else if(no < (Head-> data))		//data lahan
			{
				Head = Head -> lchild;
			}
		}
		if(Head == NULL)
		{
			return false;
		}
		else
		{
			return true;
		}
		
	}
}

int main()
{
	int no = 0;
	bool bret = false;
	
	PNODE first = NULL;
	
	Insert(&first,51);
	Insert(&first,21);
	Insert(&first,101);
	
	cout<<"Enter number to search\n";
	cin>>no;
	
	bret = Search(first,no);
	if(bret == true)
	{
		cout<<"Data is there\n";
	}
	else
	{
		cout<<"Data is not there\n";
	}
	
return 0;
}

