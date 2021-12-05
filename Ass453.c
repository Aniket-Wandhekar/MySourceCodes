//Write a program which display product of all digits of all elements from singly linear linkedlist.



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

void DisplayProduct(PNODE Head)
{
	int iProduct = 1;
	int iDigit = 0;
	
	printf("Product of element from LL  : \n");
	
	while(Head != NULL)
	{
		while((Head->data) != 0)
		{
			iDigit = (Head->data) % 10;
			if(iDigit == 0)
			{	iDigit = 1;
				iProduct = iProduct * iDigit;
			}
			else
			{
				iProduct = iProduct * iDigit;
			}
				
			(Head->data)= ((Head->data)/10);
		}
			printf("%d\t",iProduct);
		
		iProduct = 1;
		
		Head = Head->next;
	}

}

int main()
{
	PNODE first = NULL;

	InserFirst(&first,71);
	InserFirst(&first,68);
	InserFirst(&first,55);
	InserFirst(&first,555);
	InserFirst(&first,414);
	InserFirst(&first,343);
	InserFirst(&first,24);
	InserFirst(&first,160);
	
	Display(first);
	
	DisplayProduct(first);
	
	
	return 0;
}
