//Accept N numbers from user and dispaly such numbers which are even and divisible  by 5 and 3
// ip ; 85 66 3 15 93 88
//op : 15


#include<stdio.h>
#include<stdlib.h>


void Divisible5and3(int Arr[],int iSize)
{
	int iCnt = 0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]%3==0) && (Arr[iCnt]%5==0))
		{
			printf("Number divisible by 5 and 3 is: %d\n",Arr[iCnt]);
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
	
	Divisible5and3(ptr,iLength);
	
	free(ptr);
	return 0;
}

	