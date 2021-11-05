//Write a program which acccpt string from user and display difference between frequency  of small letters and capital letters.


#include<stdio.h>

int CountDifference(char *str)
{
	int iCnt = 0;
	int SmallSum = 0;
	int CapSum = 0;
	int iDiff = 0;
	
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			CapSum++;
		}
		
		else if((*str>='a')&&(*str<='z'))
		{
			SmallSum++;
		}
		str++;
	}
	if(CapSum<SmallSum)
	{
		iDiff=SmallSum-CapSum;
	}
	else
	{	
	 iDiff=CapSum-SmallSum;
	}
	
	return iDiff ;		
}

int main()
{
	char Arr[20];
	int iRet= 0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountDifference(Arr);
	
	printf("Difference is : %d\n",iRet);
	
	return 0;
}