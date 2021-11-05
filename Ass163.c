//Accept N numbers from user and dispaly such numbers which are even and divisible  by 5
// ip ; 85 66 33 80 93 88 
//op : 80


#include<stdio.h>
#include<stdlib.h>


void EvenDivisible5(int Arr[],int iSize)
{
	int iCnt = 0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]%2==0) && (Arr[iCnt]%5==0))
		{
			printf("even Number divisible by 5: %d\n",Arr[iCnt]);
		}
	}
	
}

int main()
{
	
	int *ptr = NULL;
	int i = 0;
	int iLength = 0;
	
	printf("Enter number of elements:\n");
	scanf("%d",&iLength);
	
	ptr=(int *)malloc((sizeof(int)*iLength));
	
	printf("Enter the elements:\n");
	
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	EvenDivisible5(ptr,iLength);
	
	free(ptr);
	return 0;
}

	