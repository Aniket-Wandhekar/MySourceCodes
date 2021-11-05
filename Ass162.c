//Accept N numbers from user and display such  elements which are divisible by 5..
//ip : 85 	66	3	80	93	88	
//op : 85	80	

#include<stdio.h>
#include<stdlib.h>


void Divisible5(int Arr[],int iSize)
{
	int iCnt = 0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]%5)==0)
		{
			printf("%d\t",Arr[iCnt]);
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
	
	Divisible5(ptr,iLength);
	
	free(ptr);
	return 0;
}

	
	
