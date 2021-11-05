//Accept the Character and toggle it to another case from given.


#include<stdio.h>

void DisplayToggle(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
		printf("Character in Smallcase is :%c\n", ch + 32);
	}

	if((ch>='a')&&(ch<='z'))
	{
		printf("Character in Uppercase is :%c\n", ch - 32);
	}
		
	
}

int main()
{
	char cValue = '\0';
	
	printf("Enter the Character\n");
	scanf("%c",&cValue);
	
	DisplayToggle(cValue);
	
	return 0;
}
