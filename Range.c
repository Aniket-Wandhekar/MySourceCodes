//Accept range from user and display all numbers between that range
//ip : 10  17
//op : 10	11	12	13	14	15	16	17



#include<stdio.h>

void RangeDisply(int iStart,int iEnd)
{
	int iCnt = 0;
	
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		printf("%d\t",iCnt);
	}
}

int main()
{
	int iValue1=0;
	int iValue2=0;
	
	printf("Enter Starting number \n");
	scanf("%d",&iValue1);
	
	printf("Enter end number \n");
	scanf("%d",&iValue2);
	
	RangeDisply(iValue1,iValue2);
	
	return 0;
}
