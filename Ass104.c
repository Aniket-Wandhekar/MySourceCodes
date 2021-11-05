//Accept number of rows and number of cloumns from user and display below pattern
//ip : rows= 3  cloumns = 4
//op :  *  # *  #
//		*  # *	#
//		*  # *  #



#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int rCnt = 0;
	int cCnt = 0;
	
	for(rCnt=1;rCnt<=iRow;rCnt++)
	{
		for(cCnt=1;cCnt<=iCol;cCnt++)
		{
			if((cCnt%2)== 0)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
	
}

int main()
{
	int iValue1 = 0,iValue2 = 0;
	
	printf("Enter Number of rows \n");
	scanf("%d",&iValue1);
	
	printf("Enter Number of columns \n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}