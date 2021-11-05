//program for accept number from user and display all numbers in between that range in reverse order.
//ip :25	35
//op : 30 29 28 27 26 25


#include<stdio.h>

void RangeDisplyRev(int iStart,int iEnd)
{
	int iCnt = 0;
	
	for(iCnt=iEnd;iCnt>=iStart;iCnt--)
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
	
	RangeDisplyRev(iValue1,iValue2);
	
	return 0;
}


