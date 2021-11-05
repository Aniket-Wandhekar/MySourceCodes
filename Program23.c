
#include<stdio.h>

typedef unsigned long int UINT;

UINT Factorial(int);


int main()
{
	int iNo = 0;
	UINT iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	iRet = Factorial(iNo);
	
	printf("Factorial is : %ld\n",iRet);
	
	return 0;
}


 UINT Factorial(int iValue)
{
	UINT iFact = 1;
	int iCnt = 0;  //Defination iCnt chi
	
	if(iValue < 0)   //Updater
	{
		iValue = -iValue;
	}
	
	iCnt=1 ;  //initilization
	while(iCnt<=iValue) //condition
	{
		iFact=iFact*iCnt;  //loop body
		iCnt++;		//displacement
	}
	
	return iFact;
}