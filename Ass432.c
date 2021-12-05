//Write a program which search last occurence of perticular element from singly linear linkedlist.
//function should return position at which element is found.


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

int SearchLastOcc(PNODE Head,int no)
{
	int iCnt = 0;int iTempC = 0;
	
	while(Head != NULL)
	{
		iCnt++;
		
		if(Head -> data == no)
		{
			iTempC = iCnt;
		}
			Head = Head -> next;
	}
	return iTempC;
}

int main()
{
	PNODE first = NULL;
	int iRet = 0;int iValue = 0;
	
	InserFirst(&first,70);
	InserFirst(&first,30);
	InserFirst(&first,50);
	InserFirst(&first,20);
	InserFirst(&first,30);
	InserFirst(&first,20);
	InserFirst(&first,10);
	
	Display(first);
	
	printf("Enter number to search\n");
	scanf("%d",&iValue);
	
	iRet = SearchLastOcc(first,iValue);
	
	printf("Last occurence is at position : %d\n",iRet);
	
	return 0;
}

















