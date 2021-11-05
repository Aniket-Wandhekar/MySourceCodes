//accept number from user and return difference between summesion of even digits and summesion of odd digits
//ip : 2395 
//op : -15  (2 - 17)


#include<stdio.h>

int CountDiff(int);

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountDiff(iValue);
	
	printf("Difference is : %d\n",iRet);
	
	return 0;
} 

int CountDiff(int iNo)
{
	int iDigit= 0;
	int iSumeven = 0;
	int iSumodd = 0;
	int iDiff = 0;
	
	while(iNo>0)
	{
		iDigit = iNo%10;
		
	if((iDigit%2)==0)
	{
		iSumeven = iSumeven + iDigit;
	}
	else
	{
		iSumodd = iSumodd + iDigit;
	}
	iDiff = iSumeven - iSumodd;
	
	iNo = iNo/10;
	}
	return iDiff;
}

	
		