//Accept number from user and return the count of odd numbers
//ip : 23415
//op : 3

#include<stdio.h>

int CountOdd(int);

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountOdd(iValue);
	
	printf("Count of odd digits is : %d\n",iRet);
	
	return 0;
} 

int CountOdd(int iNo)
{
		if(iNo < 0)
	{
		iNo = -iNo;
	}
	
		
	int iDigit = 0;
	int iCnt = 0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit % 2)!= 0)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}
