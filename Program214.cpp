//Doubly Circular LinkedList with OOP
#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node * next;
	struct node * prev;
}NODE,*PNODE;

class DoublyCL
{
private:
	PNODE first;	//characteristics
	PNODE last;
	int size;

public:
	DoublyCL()		//constructor
	{
		first = NULL;	
		last = NULL;
		size = 0;
	}
				//ith fakt declaration kely.
	void Display();
	int Count();
	void InsertFirst(int no);
	void InsertLast(int no);
	void InsertAtPos(int no,int iPos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int iPos);
};
//Return_Value Class_Name :: Function_Name(Parameters)
//ithe define kely khali sagle function
void DoublyCL :: InsertFirst(int no)
{
	PNODE newn = new NODE;
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if((first == NULL)&&(last == NULL))
	{
		first = newn;
		last = newn;
	}
	else
	{
		newn->next = first;
		first->prev = newn;
		first = newn;
	}
	
	last->next = first;
	first->prev = last;
	size++;
}

void DoublyCL :: InsertLast(int no)
{
	PNODE newn = new NODE;
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if((first == NULL)&&(last == NULL))
	{
		first = newn;
		last = newn;
	}
	else
	{
		last->next = newn;
		newn->prev = last;
		last = newn;
	}
	
	last->next = first;
	first->prev = last;
	size++;	
}

void DoublyCL :: Display()
{
	PNODE temp = first;
	
	for(int i = 1;i<=size;i++)
	{
		cout<<"|"<<temp->data<<"|->";
		temp = temp -> next;
	}
	cout<<"\n";
}

int DoublyCL :: Count()
{
	return size;
}

void DoublyCL :: DeleteFirst()
{
	if((first == NULL)&&(last == NULL))
	{
		return;
	}
	else if(first == last)
	{
		delete first;
		first= NULL;
		last = NULL;
	}
	else
	{
		first = first->next;
		delete last->next;
		first -> prev = last;		//he aatch lihav lagl..
		last -> next = first;
	}
	size--;
}

void DoublyCL :: DeleteLast()
{
	if((first == NULL)&&(last == NULL))
	{
		return;
	}
	else if(first == last)
	{
		delete first;
		first= NULL;
		last = NULL;
	}
	else
	{
		last =  last-> prev;
		delete last-> next;
		first -> prev = last;
		last -> next = first;
	}
	size--;
}

void DoublyCL :: InsertAtPos(int no,int iPos)
{
	if((iPos<1)||(iPos>size+1))
	{
		return;
	}
	if(iPos == 1)
	{
		InsertFirst(no);
	}
	else if(iPos == size+1)
	{
		InsertLast(no);
	}
	else
	{
		PNODE newn = new NODE;
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		PNODE temp = first;
		
		for(int i = 1;i<iPos-1;i++)
		{
			temp = temp-> next;
		}
		
		newn -> next = temp -> next;
		temp->next->prev = newn;	//newn->next->prev = newn;
		
		temp->next = newn;
		newn->prev = temp;
		
		size++;
	}
}
	


void DoublyCL :: DeleteAtPos(int iPos)
{
	
	if((iPos<1)||(iPos>size))
	{
		return;
	}
	if(iPos == 1)
	{
		DeleteFirst();
	}
	else if(iPos == size)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp = first;
	
		for(int i =1;i<iPos-1;i++)
		{
			temp = temp-> next;
		}
		temp->next = temp->next->next;
		delete temp->next->prev;
		temp->next->prev = temp;
		
		size--;
	
	}	
}


int main()
{
	DoublyCL obj;
	
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.InsertLast(51);
	obj.InsertLast(101);
	
	obj.InsertAtPos(75,3);
	obj.Display();
	
	int iRet = obj.Count();
	cout<<"Number of elemnts are : "<<iRet<<"\n";
	
	obj.DeleteAtPos(3);
	obj.DeleteFirst();
	obj.DeleteLast();
	
	obj.Display();
	

	return 0;
}

