//accept one character from user and check whether that character is vowel(a,e,i,o,u) or not.
//Input : e   output : true
//input : h 	output : false;



#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL ChkVowel(char cValue)
{
	if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' ||
		cValue== 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U') 
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
	char cValue = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter Character\n");
	scanf("%c",&cValue);
	
	bRet = ChkVowel(cValue);
	
	if(bRet == TRUE)
	{
		printf(" It is vowel");
	}
	else
	{
		printf("It is not vowel");
	}
	
	return 0;
}

	
	
	
	
	
	
