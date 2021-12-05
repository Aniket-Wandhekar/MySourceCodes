//Binary Search Tree cha code.
//without flag code
//Count function with recursion
//count leaf node...jyala por bal nahi asa
//count parent node..jyala kiman 1 lekru aahe asa
//Display

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

int Count(PNODE Head)
{
	static int iCnt = 0;
	
	if(Head != NULL)
	{
		iCnt++;
		Count(Head -> lchild);
		Count(Head -> rchild);
	}
	return iCnt;	
}


int CountLeaf(PNODE Head)
{
	static int iCnt = 0;
	
	if(Head != NULL)
	{
		if((Head->lchild == NULL) && (Head->rchild == NULL))
		{
			iCnt++;
		}
		
		CountLeaf(Head -> lchild);
		CountLeaf(Head -> rchild);
	}
	return iCnt;	
}


int CountParent(PNODE Head)
{
	static int iCnt = 0;
	
	if(Head != NULL)
	{
		if((Head->lchild != NULL) || (Head->rchild != NULL))
		{
			iCnt++;
		}
		
		CountParent(Head -> lchild);
		CountParent(Head -> rchild);
	}
	return iCnt;	
}


void DisplayInorder(PNODE Head)		//LDR
{
	
	if(Head != NULL)
	{
		DisplayInorder(Head -> lchild);	//L
		
		cout<<Head->data<<"\n";		//D
		
		DisplayInorder(Head -> rchild);	//R
	}	
}


void DisplayPostorder(PNODE Head)		//LRD
{
	
	if(Head != NULL)
	{
		DisplayPostorder(Head -> lchild);	//L
		
		DisplayPostorder(Head -> rchild);	//R
		
		cout<<Head->data<<"\n";		//D
	}	
}


void DisplayPreorder(PNODE Head)		//DLR
{
	
	if(Head != NULL)
	{
		cout<<Head->data<<"\n";		//D
		
		DisplayPreorder(Head -> lchild);	//L
		
		DisplayPreorder(Head -> rchild);	//R
		
	}	
}
int main()
{
	int no = 0;
	bool bret = false;
	int iret = 0;
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
	
	iret = Count(first);
	cout<<"Number of nodes are : "<<iret<<"\n";
	
	iret = CountLeaf(first);
	cout<<"Number of leaf nodes are : "<<iret<<"\n";
	
	iret = CountParent(first);
	cout<<"Number of parent nodes are : "<<iret<<"\n";
	
	cout<<"Inorder\n";
	DisplayInorder(first);
	
	cout<<"Postorder\n";
	DisplayPostorder(first);
	
	cout<<"PreOrder\n";
	DisplayPreorder(first);
	
	return 0;
}

