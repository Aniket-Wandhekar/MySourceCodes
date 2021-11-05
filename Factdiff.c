//write a program which accepts number from user and return difference between summesion of all its factors and non factors
// input : 12
//output  : -34		(16-50)

//input : 10
//output : -29 	(8 - 37)

#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	int iSubs = 0;
	int iDiff = 0;
	
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)== 0)
		{
			iSum = iSum + iCnt;
		}
		if((iNo % iCnt) != 0)
		{
			iSubs = iSubs + iCnt;
		}
		
		iDiff = iSum - iSubs;
	}
	return iDiff;

}

int main()
{
	 int iValue = 0;
	 int iRet = 0;
	 
	 
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = FactDiff(iValue);
	
	printf("%d",iRet);
	
	return 0;
}








