//Accept N numbers from user and return difference between the Smallest and larfgest number


#include<stdio.h>
#include<stdlib.h>

int SmallestNumber(int Arr[],int iSize)
{
	int iCnt = 0;
	int iSmall = Arr[0];
	int iLarge = Arr[0];
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt])<iSmall)
		{
			iSmall=Arr[iCnt];
		}
		
		else if((Arr[iCnt])>iLarge)
		{
			iLarge=Arr[iCnt];
		}
			
	}
	
	return iLarge-iSmall;
	
}

int main()
{
	int *ptr=NULL;
	int i = 0;
	int iLength = 0;
	int iRet = 0;
	
	
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(sizeof(int) * iLength);
	
	printf("Enter elements\n");
	
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	
	iRet=SmallestNumber(ptr,iLength);
	
	printf("difference between Smallest and largest number from array is :%d\n",iRet);
	
	free(ptr);
	
	return 0;
}


