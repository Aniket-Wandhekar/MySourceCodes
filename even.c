//write a program which accepts one number from user and print that number of even numbers on screen
//Input : 7
//output : 2 4 6 8 10 12 14        

#include<stdio.h>
void PrintEven(int iNo)
{
	int iNum = 0;
	int iCnt = 0;
	
	if(iNo <= 0)
	{
		return;
	}
	
	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		iNum = iCnt * 2;
		printf("%d\t",iNum);
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	PrintEven(iValue);
	return 0;
}



