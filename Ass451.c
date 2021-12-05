//Write a program which reverse each element of singly linked list.

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

void Reverse(PNODE Head)
{
	int iRev = 0;
	int iDigit = 0;
	
	printf("Reversr element LL is : \n");
	
	while(Head != NULL)
	{
		while((Head->data) != 0)
		{
			iDigit = (Head->data) % 10;
			iRev = (iRev*10)+iDigit;
			(Head->data)= ((Head->data)/10);
		}
		printf("%d\t",iRev);
		
		iRev = 0;
		
		Head = Head->next;
		
	}

}

int main()
{
	PNODE first = NULL;

	InserFirst(&first,71);
	InserFirst(&first,68);
	InserFirst(&first,55);
	InserFirst(&first,55);
	InserFirst(&first,41);
	InserFirst(&first,34);
	InserFirst(&first,24);
	InserFirst(&first,16);
	
	Display(first);
	
	Reverse(first);
	
	
	return 0;
}
