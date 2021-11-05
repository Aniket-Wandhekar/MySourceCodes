//Accept numbeers from  user and check whether 11 number is in it or not


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckNumber(int Arr[],int iSize)
{
	int iCnt = 0;
	
	for(iCnt =0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]==11))
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
	bool bRet = 0;
	int i = 0;
	int iLength = 0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(sizeof(int) * iLength);
	
	printf("Enter elements\n");
	
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	bRet = CheckNumber(ptr,iLength);
	
	if(bRet==true)
	{
		printf("11 is there\n");
	}
	else
	{
		printf("11 is not there\n");
	}
	
	free(ptr);
	
	return 0;
}

