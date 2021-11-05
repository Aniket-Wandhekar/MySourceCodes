
//accept N number from user and return frequency of even numbers.


#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize)
{
	int iCnt = 0;
	int iFrequency = 0;
	
	
	for(iCnt =0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iFrequency++; 
		}
	}
	return iFrequency;
}

int main()
{
	int *ptr=NULL;
	int iRet = 0;
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
	
	iRet = CountEven(ptr,iLength);
	
	printf("Count of even numbers is: %d\n",iRet);
	
	free(ptr);
	
	return 0;
}

