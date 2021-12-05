//Write a program which display addition of digits of elements from singly linear linkedlist.


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

void SumDigit(PNODE Head)
{
	int iSum = 0;
	int iDigit = 0;
	
	printf("Addition of digits of element is : \n");
	
	while(Head != NULL)
	{
		while((Head->data) != 0)
		{
			iDigit = (Head->data) % 10;
			iSum = iSum + iDigit;
			(Head->data)= ((Head->data)/10);
		}
		printf("%d\t",iSum);
		
		iSum = 0;
		
		Head = Head->next;
		
	}

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
	InserFirst(&first,34);
	InserFirst(&first,20);
	InserFirst(&first,11);
	
	Display(first);
	
	SumDigit(first);
	
	
	return 0;
}
