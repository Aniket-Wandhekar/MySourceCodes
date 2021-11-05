//program which accept string and check pallindrome or not.
//with flag without start pointer

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(char *str)
{
	char *end = NULL;
	bool flag = true;
	
	end = str;
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(str < end)
	{
		if(*str != *end)
		{
			flag = false;
			break;
		}
		str++;
		end--;
	}
	
	return flag;	
}
	


int main()
{
	char Arr[50];
	bool bRet = false;

	printf("Enter The string\n");
	scanf("%[^'\n']s",Arr);
	
	bRet=CheckPallindrome(Arr);
	
	if(bRet==true)
	{
		printf("It is pallindrome\n");
	}
	else
	{
		printf("It is not pallindrome\n");
	}
	
	return 0;
}


