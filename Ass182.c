//Accept N numbers from user and also accept one another number as NO,and return index of first occurence of that NO





#include<stdio.h>
#include<stdlib.h>



int FirstOccurence(int Arr[],int iSize,int iNo)
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
		return -1;
	}
	else
	{
		return iCnt;
	}


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
	
	printf("Enter number to check occurence\n");
	scanf("%d",&iValue);
	
	
	iRet = FirstOccurence(ptr,iLength,iValue);
	
	if(iRet==-1)
	{
		printf("There is no such number\n");
	}
	else
	{
		printf("Number is at index : %d\n",iRet);
	}
	
	
	free(ptr);
	
	return 0;
}

