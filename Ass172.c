//Accept numbeers from  user and return the difference between frefuency of even numbers and odd numbers


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
	int iCnt = 0;
	int EFrequency = 0;
	int OFrequency = 0;
	
	for(iCnt =0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			EFrequency++; 
		}
		else
		{
			OFrequency++;
		}
		
			
	}
	return EFrequency-OFrequency;
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
	
	iRet = Frequency(ptr,iLength);
	
	printf("Count of even numbers is: %d\n",iRet);
	
	free(ptr);
	
	return 0;
}

