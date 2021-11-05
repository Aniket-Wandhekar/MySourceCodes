#include<stdio.h>
void Display(int iNo)
{
	int iCnt = 0;
	iCnt = 1;
	while(iNo>=iCnt)
	{
		printf("*\n");
		iNo--;
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter Number :");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}
