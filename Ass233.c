//write a program which accepty the string and toggle the case

#include<stdio.h>

void Togglecase(char *str)
{
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			printf("%c",*str-32);
		}
		else if((*str>='A')&&(*str<='Z'))
		{
			printf("%c",*str+32);
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
	
	Togglecase(arr);
	
	return 0;
}
