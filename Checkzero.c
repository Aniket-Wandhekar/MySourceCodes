//Write a program which accept number from user and check whether it contains 0 in it or not
// ip : 2397
//op  :There is no zero

//ip  : 1205
//op  : there is zero

#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int);




int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet = ChkZero(iValue);
	
	if(bRet == true)
	{
		printf("There is zero\n");
	}
	else
	{
		printf("There is no zero\n");
	}

	return 0;
}
	
bool ChkZero(int iNo)
{
	if(iNo == 0)
	{
		return true;
	}
	
	int iDigit = 0;
	
	while(iNo>0)
	{
		iDigit = iNo%10;
		
		if(iDigit == 0)
		{
			return true;
		}
		iNo = iNo/10;	
	}
	
}




