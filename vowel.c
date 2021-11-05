#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkVowel(char CValue)


{
	 if (
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}
int main()
{
	char cValue = 0;
	BOOL bRet = 0;
	
	printf("Enter Character\n");
	scanf("%c",&cValue);
	bRet = ChkVowel(cValue);
	
	if (bRet == TRUE)
	{
		printf("It is Vowel");
	}
	else
	{
		printf("It is Not Vowel");
	}
	return 0;
}
	
		