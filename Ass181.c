//Accept numbeers from  user and also 1 number from user  check whether number is in it or not


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckNumber(int Arr[],int iSize,int iNo)
{
	int iCnt = 0;
	
	for(iCnt =0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]==iNo))
		{
			break;
		}
	}
	
	if(iCnt==iSize)
	{
		return false;
	}
	else
	{
		return true;
	}

}

int main()
{
	int *ptr=NULL;
	bool bRet = false;
	int i = 0;
	int iLength = 0;
	int iValue = 0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(sizeof(int) * iLength);
	
	printf("Enter elements\n");
	
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Enter number to check\n");
	scanf("%d",&iValue);
	
	
	bRet = CheckNumber(ptr,iLength,iValue);
	
	if(bRet==true)
	{
		printf("Number is there\n");
	}
	else
	{
		printf("Number not there\n");
	}
	
	free(ptr);
	
	return 0;
}

