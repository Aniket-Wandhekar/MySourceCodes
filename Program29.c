//program for accept number from user and  display addition of digits of that number


#include<stdio.h>

int Display(int);  //function decleration

int main()		//entry point function
{
	int iValue = 0;
	int iRet = 0;
	printf("enter number\n");
	scanf("%d",&iValue);
	iRet = Display(iValue);
	
	printf("Addition of digits is : %d\n",iRet);
	
	return 0;
}

int Display(int iNo)		
{
	int iDigit = 0;
	int iSum = 0;

	while(iNo>0)
	{
		iDigit = iNo % 10;  
		iSum = iSum + iDigit;
		iNo = iNo / 10;		
	}
	
	return iSum;	//he ith lihlay while chya baher karn while madhe lihl tr last line la loop baher pdto ekdach run houn 
}

