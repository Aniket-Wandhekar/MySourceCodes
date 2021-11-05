//program which accept string and check pallindrome or not.


#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(char *str)
{
	char *start = NULL;
	char *end = NULL;
	
	start = str;
	end = str;
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		if(*start != *end)
		{
			break;
		}
		start++;
		end--;
	}
	
	if(start < end)
	{
		return false;
	}
	else
	{
		return true;
	}
		
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


