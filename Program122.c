//ACCEPT STRING AND COUNT THE VOWELS.(a,e,i,o,u)

#include<stdio.h>

int CountVowels(char *str)
{
	int iCnt = 0;
	
	if(str==NULL)
	{
		return -1;
	}
	
	while(*str!='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
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
	
	printf("Enter The string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountVowels(Arr);
	
	printf("Count of vowels is: %d\n",iRet);
	
	return 0;
}
