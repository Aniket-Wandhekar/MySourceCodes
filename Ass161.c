//program for accept numbers from user and display the difference between sum of even and sum of odd numbers from that elements


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
	int iCnt =0;
	int EvenSum = 0;
	int OddSum = 0;
	
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			EvenSum=EvenSum + Arr[iCnt];
		}
		else
		{
			OddSum = OddSum + Arr[iCnt];
		}
	}
	return EvenSum-OddSum;
			
}

int main()
{
	int *ptr = NULL;
	int iLength = 0;
	int i = 0;
	int iRet = 0;
	
	printf("Enter Number of elements:\n");
	scanf("%d",&iLength);
	
	ptr = (int*)malloc((sizeof(int)*iLength));
	
	printf("Enter The Elements:\n");
	
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet = Difference(ptr,iLength);
	
	printf("Difference is :%d\n",iRet);
	
	free(ptr);
	
	return 0;
}