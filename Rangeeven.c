//program for accept range from user and dispay even numbers from that range
//ip : 23 	35
//op : 24	26	28	30	32 34


#include<stdio.h>

void RangeDisplyEven(int iStart,int iEnd)
{
	int iCnt = 0;
	
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		if((iCnt%2)==0)
		{
		printf("%d\t",iCnt);
		}
		
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
	
	RangeDisplyEven(iValue1,iValue2);
	
	return 0;
}
