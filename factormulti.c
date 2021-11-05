//write a program which accepts number from user and display its multiplicaton of factors.

//input : 12
//output : 144 (1*2*3*4*6)



#include<stdio.h>


int MultiFact(int iNo)
{
	int iCnt = 0;
	int iFact = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	
	for(iCnt = 1;iCnt<iNo;++iCnt)
	{
		if((iNo % iCnt) == 0)
		{
			iFact = iFact*iCnt;
		}
		
	}
	return iFact;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=MultiFact(iValue);
	printf("%d\n",iRet);
	
	return 0;
}
