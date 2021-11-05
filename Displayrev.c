//program for accept number from user and display its digits in reverse format
//ip : 2345
//op : 5	4	3	2

#include<stdio.h>

int DisplayDigit(int);  

int main()		
{
	int iValue = 0;
	int iRet = 0;
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	iRet=DisplayDigit(iValue);
	
	printf("Reverse number is : %d\n",iRet);
	
	return 0;
}

int DisplayDigit(int iNo)		
{
	int iDigit = 0;
	int iRev = 0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo>0)
	{
		iDigit = iNo % 10;  
		iRev = (iRev*10)+iDigit;
		iNo = iNo / 10;		
	}
	
	return iRev;
}

