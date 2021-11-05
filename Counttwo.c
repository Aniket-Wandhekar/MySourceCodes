//accept number from user and count the frequency of 2 in this number
// ip : 1234
// op : 1

//ip : 52420
//op : 2


#include<stdio.h>

int CountTwo(int);

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountTwo(iValue);
	
	printf("Count of frequency of two is : %d\n",iRet);
	
	return 0;
}

int CountTwo(int iNo)
{
	int	iDigit = 0;
	int iCnt = 0;
	
	while(iNo!=0)
	{
		iDigit = iNo %10;
		if(iDigit == 2)
		{
			iCnt++;
		}
		iNo = iNo/10;;
	}
	return iCnt;
}
		
	
