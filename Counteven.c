//Accept the number from user and return the count of even digits.
// ip : 23468
// op : 4


//ip :-1018 
// op : 2

#include<stdio.h>

int CountEven(int);

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountEven(iValue);
	
	printf("Count of even digits is : %d\n",iRet);
	
	return 0;
} 

int CountEven(int iNo)
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
		if((iDigit % 2)== 0)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}
