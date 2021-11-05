//Write a program which accept string from user and also accept one character.and return a frequency of that character.


#include<stdio.h>

int CountChar(char *str,char Ch)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if(*str==Ch)
		{
			iCnt++;
		}
		str++;
	}
	
	return iCnt;
	
}

int main()
{
	char Arr[50];
	char cValue='\0';
	int iRet = 0;
	
	printf("Enter The string\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter the Character\n");
	scanf(" %c",&cValue);
	
	iRet=CountChar(Arr,cValue);
	
	printf("Count of character in string is :%d\n",iRet);
	
	return 0;
}

	