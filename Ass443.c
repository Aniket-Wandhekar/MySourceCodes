//Write a a program which return addition of even elements  from singly linear linked list.


#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node * next;
}NODE,*PNODE,**PPNODE;


void InserFirst(PPNODE Head,int no)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data =no;
	newn -> next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d| -> ",Head->data);
		Head = Head -> next;
	}
	printf("NULL\n");
}

int EvenAddition(PNODE Head)
{
	int Sum = 0;
	
	while(Head != NULL)
	{
		if((Head->data) % 2 == 0)
		{
			Sum = Sum + (Head->data);
		}
		
		Head = Head -> next;
	}
	return Sum;
}

int main()
{
	PNODE first = NULL;
	int iRet = 0;
	
	InserFirst(&first,71);
	InserFirst(&first,60);
	InserFirst(&first,55);
	InserFirst(&first,55);
	InserFirst(&first,41);
	InserFirst(&first,30);
	InserFirst(&first,20);
	InserFirst(&first,10);
	
	Display(first);
	
	iRet = EvenAddition(first);
	
	printf("Addition of all even elements is : %d\n",iRet);
	
	return 0;
}



