//write a program which accepts number from user and write summesition of all its non factors
//input : 12
//output : 50      (5+7+8+9+10+11 = 50)

#include<stdio.h>

int SumNonFact(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{	
		if((iNo%iCnt)!= 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

int main()
{
	 int iValue = 0;
	 int iRet = 0;
	 
	 
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = SumNonFact(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
