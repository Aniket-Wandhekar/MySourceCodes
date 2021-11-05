//Accept number of rows and columns from user display below pattern
/*  A 	B	C	D
	a 	b   c   d
	A 	B	C	D
	a   b   c   d*/
	
	
	
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int rCnt =0,cCnt =0;
	char ch ='\0';
	
	
	for(rCnt=1;rCnt<=iRow;rCnt++)
	{
		if((rCnt%2)==0)
		{	
		for(cCnt=1,ch='a';cCnt<=iCol;cCnt++,ch++)
		{
			printf("%c\t",ch);
		}
		}
		
		else
		{
			for(cCnt=1,ch='A';cCnt<=iCol;cCnt++,ch++)
		{
			printf("%c\t",ch);
		}
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

	
