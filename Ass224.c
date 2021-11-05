//Write a program which accepts string from user and check whether vowels in it or not.


#include<stdio.h>
#include<stdbool.h>

int CkeckVowel(char *str)
{
	while(*str!='\0')
	{
		if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
		*str== 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') 
		{
			return true;
		}
		else
		{
			return false;
		}
	}		
}

int main()
{
	char Arr[50];
	int iRet = false;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CkeckVowel(Arr);
	
	if(iRet==true)
	{
		printf("There is vowel in string");
	}
	else
	{
		printf("There is no vowel");
	}
	
	return 0;
}

		