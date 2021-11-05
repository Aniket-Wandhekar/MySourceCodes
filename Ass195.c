//Accept N numbers from user and display summesion of digits of each number.


#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iSize)
{
	int iCnt = 0;
	int iDigit = 0;
	int iSum = 0;
	
	
	printf("Sum of Digit of each Number :\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		while(Arr[iCnt]!=0) //123
		{
			iDigit=Arr[iCnt]%10; //123 % 10 = 3
			
			iSum=iSum+iDigit; //0+3 = 3
			Arr[iCnt]=Arr[iCnt]/10;  // 123/10 = 12
		}	
			printf("\n %d\t",iSum);
			iDigit = 0;
			iSum=0;
	}

}

int main()
{
	int *ptr=NULL;
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
	
	DigitsSum(ptr,iLength);
	
	free(ptr);
	
	return 0;
}