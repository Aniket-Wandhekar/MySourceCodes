//accept number from user and count the frequency of 4 in this number
// ip : 1234
// op : 1

//ip : 5442420
//op : 3


#include<stdio.h>

int CountFour(int);

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountFour(iValue);
	
	printf("Count of frequency of two is : %d\n",iRet);
	
	return 0;
}

int CountFour(int iNo)
{
	int	iDigit = 0;
	int iCnt = 0;
	
	while(iNo!=0)
	{
		iDigit = iNo %10;
		if(iDigit == 4)
		{
			iCnt++;
		}
		iNo = iNo/10;;
	}
	return iCnt; 
}
		
	
