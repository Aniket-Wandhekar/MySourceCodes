//Accept string from user and count number of Small characters.


#include<stdio.h>


int CountSmall(char *str)
{
	int iCnt = 0;
	
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
		}
		str++;
	}	
	return iCnt;		
}

int main()
{
	char Arr[20];
	int iRet= 0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountSmall(Arr);
	
	printf("Count of small Letters is : %d\n",iRet);
	
	return 0;
}