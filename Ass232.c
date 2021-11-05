//Write a program which accept string from user and convert it into UPPERCASE

#include<stdio.h>

void Uppercase(char *str)
{
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			printf("%c",*str-32);
		}
		else
		{
			printf("%c",*str);
		}
		str++;
	}
}

int main()
{
	char arr[50];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	Uppercase(arr);
	
	return 0;
}
