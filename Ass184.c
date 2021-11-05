//Accept N numbers from user and accept the range and display all elements from that range


#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int Arr[],int iSize,int iNo1,int iNo2)
{
	int iCnt = 0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]>=iNo1)&&(Arr[iCnt]<=iNo2))
		{
			printf("%d\t",Arr[iCnt]);
		}
	
	}
}

int main()
{
	int *ptr=NULL;
	int i = 0;
	int iLength = 0;
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(sizeof(int) * iLength);
	
	printf("Enter elements\n");
	
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Enter first number from range\n");
	scanf("%d",&iValue1);
	
	printf("Enter second number from range\n");
	scanf("%d",&iValue2);
	
	DisplayRange(ptr,iLength,iValue1,iValue2);
	
	free(ptr);
	
	return 0;
}


