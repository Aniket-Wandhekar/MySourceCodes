//Write a program which display all elements which are Prime from singly linear linkedlist


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

void DisplayPrime(PNODE Head)
{
	int iCnt = 0,Count = 0;

	printf("Prime numbers are : ");
	while(Head != NULL)
	{
		for(iCnt = 2;iCnt<=((Head->data)/2);iCnt++)
		{
			if(((Head->data) % iCnt ) == 0)
			{
				Count++;
				break;
			}
		}	
		if(Count == 0 && (Head->data) != 1)
		{
			printf("%d\t",Head->data);
		}
			
		Head = Head->next;
		
		iCnt = 0;
		Count = 0;
		
	}
}

int main()
{
	PNODE first = NULL;
	int iRet = 0;int iValue = 0;
	
	InserFirst(&first,89);
	InserFirst(&first,208);
	InserFirst(&first,6);
	InserFirst(&first,41);
	InserFirst(&first,17);
	InserFirst(&first,20);
	InserFirst(&first,11);
	
	Display(first);
	
	DisplayPrime(first);
	
	return 0;
}

