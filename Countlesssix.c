//Accept number from user and count frequency of such a digits which are less than 6
// ip : 12378
//op : 3

//ip : 146689
//op : 2


#include<stdio.h>

int Count(int);

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Count(iValue);
	
	printf("frequency of digits less than 6 is : %d\n",iRet);
	
	return 0;
} 

int Count(int iNo)
{
	
	
	int iDigit = 0;
	int icnt = 0;
	if(iNo == 0)
	{
		return 1;
	}
	
	
	while(iNo>0)
	{
		iDigit = iNo%10;
		if(iDigit < 6)
		{
			icnt++;
		}
		iNo = iNo/10;
	}
	return icnt;
}
		