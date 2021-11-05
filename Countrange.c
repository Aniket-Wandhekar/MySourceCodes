//Accept number from user and return the count of digits between 3 and 7
// ip : 12395
// op ; 1

//ip : 4521
//op : 2

#include<stdio.h>

int CountRange(int);

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountRange(iValue);
	
	printf("Count of odd digits is : %d\n",iRet);
	
	return 0;
} 

int CountRange(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;
	
	
	while(iNo>0)
	{
	iDigit=iNo%10;
	
	if((iDigit>3)&& (iDigit<7))
		
	{
		iCnt++;
	}
	iNo=iNo/10;
	}
	return iCnt;
}

	