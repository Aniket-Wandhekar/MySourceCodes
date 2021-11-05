//program for accept range from user and display adddition of all numbers from that range
//ip : 23	30
//op : 212

#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
	
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		iSum = iSum + iCnt;
	}
	return iSum;
}

int main()
{
	int iValue1=0;
	int iValue2=0;
	int iRet = 0;
	
	printf("Enter Starting number \n");
	scanf("%d",&iValue1);
	
	printf("Enter end number \n");
	scanf("%d",&iValue2);
	
	iRet=RangeSum(iValue1,iValue2);
	
	printf("Addition of numbers from range is :%d\n",iRet);
	
	return 0;
}
