//write a prgram which accepts number from user and display its factors in decreasing order

// input : 12
//output : 6	4	3	2	1

#include<stdio.h>

void FactRev(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		if((iNo % iCnt) == 0  && iNo != iCnt)
		{
			printf("%d\t",iCnt);
		}
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	FactRev(iValue);
	
	return 0;
}

	