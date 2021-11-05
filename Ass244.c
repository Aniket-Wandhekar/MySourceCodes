////write a program which accept string from user and accept one character.return index of last occurence of that number.

#include<stdio.h>


int LastChar(char *str,char Ch)
{
	
	int index=0;
	int LastOcc = -1;
	
	while(*str!='\0')
	{
		if(*str==Ch)
		{
			LastOcc = index;
		}
		index++;
		str++;
	}
	
	return LastOcc;
	
	
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
	
	iRet=LastChar(Arr,cValue);
	
	printf("Character last location is :%d\n",iRet);
	
	return 0;
}

