//accep number from user and return multiplication of all digits
// ip : 2395
// op : 270


#include<stdio.h>

int MultDigits(int);

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet =MultDigits(iValue);
	
	printf("Multiplication of digits is : %d\n",iRet);
	
	return 0;
} 

int MultDigits(int iNo)
{
	int iDigit = 0;
	int iMult = 1;
	
	while(iNo>0)
	{
		iDigit = iNo%10;
		{
			iMult = iMult * iDigit;
		}
		iNo=iNo/10;
	}
	return iMult;
}

	