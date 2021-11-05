//Accept N numbers from user and accept the range and return the product of all odd number


#include<stdio.h>
#include<stdlib.h>

int ProductOdd(int Arr[],int iSize)
{
	int iCnt = 0;
	int iProduct = 1;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]%2)!=0)
		{
			iProduct=iProduct*Arr[iCnt];
		}
	}
	if(iProduct==1)
	{
		printf("There is no odd numbers\n");
	}
	
	return iProduct;
	
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
	
	
	iRet=ProductOdd(ptr,iLength);
	
	printf("Product of odd numbers from array is :%d\n",iRet);
	
	
	
	free(ptr);
	
	return 0;
}


