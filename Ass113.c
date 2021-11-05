//Accept number of rows and columns from user display below pattern
/*  A 	A	A	A
	B   B   B   B
	C   C   C   C
	D   D   D   D*/
	
	
	
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int rCnt =0,cCnt =0;
	char ch ='\0';
	
	
	for(rCnt=1,ch='A';rCnt<=iRow;rCnt++,ch++)
	{	
		for(cCnt=1;cCnt<=iCol;cCnt++)
		{
			printf("%c\t",ch);
		}
		
		printf("\n");	
	}
	

}

int main()
{
   int iValue1 = '\0',iValue2 = '\0';
	
	printf("Enter Number of rows \n");
	scanf("%d",&iValue1);
	
	printf("Enter Number of columns \n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}

	
