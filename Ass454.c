//Write a program which display smallest digit of all element from singly linear LinkedList.

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
		printf("%d\t",Head->data);
		Head = Head -> next;
	}
	printf("NULL\n");
}

void DisplaySmall(PNODE Head)
{
	int iDigit = 0;

	printf("Smallest digit of element from LL  : \n");
	
	while(Head != NULL)
	{
		int iSmall = ((Head->data) % 10);
		
		while((Head->data) != 0)
		{	
			iDigit = (Head->data) % 10;
			if(iSmall > iDigit)
			{
				iSmall = iDigit;
			}				
			(Head->data)= ((Head->data)/10);
		}
			printf("%d\t",iSmall);
	
			Head = Head->next;
	}
}

int main()
{
	PNODE first = NULL;

	InserFirst(&first,71);
	InserFirst(&first,68);
	InserFirst(&first,55);
	InserFirst(&first,523);
	InserFirst(&first,214);
	InserFirst(&first,343);
	InserFirst(&first,24);
	InserFirst(&first,362);
	
	Display(first);
	
	DisplaySmall(first);
	
	
	return 0;
}
