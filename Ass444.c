
//Write a programm which returns second maximun number from singly linear linkedlist.


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

int SecMaximum(PNODE Head)
{
	int iMaxFirst= 0,iMaxSec = 0;
	
	while(Head != NULL)
	{
		if((Head->data) > iMaxFirst)
		{
			iMaxSec = iMaxFirst;
			iMaxFirst = Head->data;
		}
		else if(((Head->data) > iMaxSec ) && ((Head->data) < iMaxFirst))
		{
			iMaxSec = Head->data;
		}
		
		Head = Head -> next;
	}
	return iMaxSec;
}

int main()
{
	PNODE first = NULL;
	int iRet = 0;
	
	InserFirst(&first,7000);
	InserFirst(&first,6000);
	InserFirst(&first,70);
	InserFirst(&first,60);
	InserFirst(&first,90);
	InserFirst(&first,20);
	InserFirst(&first,1000);
	
	Display(first);
	
	iRet = SecMaximum(first);
	
	printf("Second Largest element from all elements is : %d\n",iRet);
	
	return 0;
}


