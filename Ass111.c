//Accept number of rows and columns from user display below pattern
/*  A 	B	C	D
	A	B	C	D
	A 	B	C	D
	A	B	C	D*/


#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int rCnt =0,cCnt =0;
	char ch ='\0';
	
	
	for(rCnt=1;rCnt<=iRow;rCnt++)
	{
		for(cCnt=1,ch='A';cCnt<=iCol;cCnt++,ch++)
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

	