//Accept characters and swap the characters.

#include<stdio.h>

void Swap(char *p,char *q)
{
	char temp;
	
	temp =*p;
	*p=*q;
	*q=temp;
	
}
int main()
{
	char ch1,ch2;
	
	printf("Enter first Character\n);
	scanf("%c",&ch1);
	
	printf("Enter second Character\n);
	scanf(" %c",&ch2);
	
	printf("Before Swapping characters are %c %c\n",ch1,ch2);
	
	Swap(&ch1,&ch2);  //call  by address
	
	printf("After Swapping characters are %c %c\n",ch1,ch2);
	
	return 0;
}

	


