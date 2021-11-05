
//accept N number from user and return frequency of 11 from that numbers.


#include<stdio.h>
#include<stdlib.h>

int Frequency11(int Arr[],int iSize)
{
	int iCnt = 0;
	int iFrequency = 0;
	
	
	for(iCnt =0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]==11))
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
	
	iRet = Frequency11(ptr,iLength);
	
	printf("frequency of 11 is : %d\n",iRet);
	
	free(ptr);
	
	return 0;
}

