//Write a program which display all elements which are perfect from singly linear linkedlist


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

void DisplayPerfect(PNODE Head)
{
	int iCnt = 0;
	int iSum = 0;
	
	printf("Perfect numbers are : ");
	while(Head != NULL)
	{
		for(iCnt = 1;iCnt<=((Head->data)/2);iCnt++)
		{
			if(((Head->data) % iCnt ) == 0)
			{
				iSum = iSum + iCnt;
			}
			
			if(iSum == (Head->data))
			{
				printf("%d\t",iSum);
			}
		}	
		Head = Head->next;
		
		iSum = 0;
		iCnt = 0;
	}
}

int main()
{
	PNODE first = NULL;
	int iRet = 0;int iValue = 0;
	
	InserFirst(&first,70);
	InserFirst(&first,28);
	InserFirst(&first,50);
	InserFirst(&first,40);
	InserFirst(&first,6);
	InserFirst(&first,6);
	InserFirst(&first,28);
	
	Display(first);
	
	DisplayPerfect(first);
	
	return 0;
}

