//Write a program which display largest digit of all element from singly linear LinkedList.

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

void DisplayLarge(PNODE Head)
{

	int iDigit = 0;
	
	printf("Largest digit of element from LL  : \n");
	
	while(Head != NULL)
	{
		int iLarge = 0;
		
		while((Head->data) != 0)
		{	
			iDigit = (Head->data) % 10;
			if(iLarge < iDigit)
			{
				iLarge = iDigit;
			}				
			(Head->data)= ((Head->data)/10);
		}
			printf("%d\t",iLarge);
			
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
	InserFirst(&first,162);
	
	Display(first);
	
	DisplayLarge(first);
	
	
	return 0;
}
