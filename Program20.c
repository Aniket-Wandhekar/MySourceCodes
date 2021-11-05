#include<stdio.h>


unsigned long int Factorial(int);


int main()
{
	int iNo = 0;
	unsigned long int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	iRet = Factorial(iNo);
	
	printf("Factorial is : %d\n",iRet);
	
	return 0;
}


 unsigned long int Factorial(int iValue)
{
	unsigned long int iFact = 1;
	int iCnt = 0;
	
	if(iValue < 0)   //Updater
	{
		iValue = -iValue;
	}
	
	
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iFact=iFact*iCnt;
	}
	
	return iFact;
}