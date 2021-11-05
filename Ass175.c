//Accept N numbers from user and also accept 1 number and return the frequency of that number from that numbers.


#include<stdio.h>
#include<stdlib.h>

int Frequency11(int Arr[],int iSize,int iNo)
{
	int iCnt = 0;
	int iFrequency = 0;
	
	
	for(iCnt =0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]==iNo))
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
	int iValue = 0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(sizeof(int) * iLength);
	
	printf("Enter elements\n");
	
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Enter Number to search\n");
	scanf("%d",&iValue);
	
	iRet = Frequency11(ptr,iLength,iValue);
	
	printf("Frequency of that number is : %d\n",iRet);
	
	free(ptr);
	
	return 0;
}

