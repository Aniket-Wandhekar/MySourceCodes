//Accept String from user and alse accept one character also .and return the frequency count of that character. 

#include<stdio.h>

int CountFrequency(char *str,char Ch)
{
	int iCnt = 0;
	
	if(str==NULL)
	{
		return -1;
	}
	
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
	int iRet = 0;
	char cValue = '\0';
	
	printf("Enter The string\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter the character\n");
	scanf(" %c",&cValue);	//space takaychi %c chyaa adhi.tyamul enter jat vrchya scanf ch.
	
	
	iRet=CountFrequency(Arr,cValue);
	
	printf("Frequency of character is: %d\n",iRet);
	
	return 0;
}


