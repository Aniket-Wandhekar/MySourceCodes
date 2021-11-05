//program for accept number from user and display the Smallest digit from that number
// ip : 12345
//op : 1



#include<stdio.h>

int SmallDigit(int);  //function decleration

int main()		//entry point function
{
	int iValue = 0;
	int iRet = 0;
	printf("enter number\n");
	scanf("%d",&iValue);
	iRet = SmallDigit(iValue);
	
	printf("Smallest digit is : %d\n",iRet);
	
	return 0;
}

int SmallDigit(int iNo)		
{
	int iDigit = 0;
	int iSmall = iNo%10;
	
	
	if(iNo == 0)		//filter
	{
		return 0;
	}
	if(iNo < 0)			//updater
	{
		iNo = -iNo;
	}
	

	while(iNo>0)
	{
		iDigit = iNo % 10;  
		if(iSmall>iDigit)
		{
			iSmall = iDigit;
		}
		iNo = iNo / 10;		
	}
	
	return iSmall;
}

