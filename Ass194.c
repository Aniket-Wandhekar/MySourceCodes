//Accept N numbers from user and display all such numbers which contains 3 digits in it.


#include<stdio.h>
#include<stdlib.h>

int Num3Digit(int Arr[],int iSize)
{
	int iCnt = 0;
	int iDigit = 0;
	int num=0;
	int j=0;
	
	printf("3 digit numbers:\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
	    num=Arr[iCnt];
	    while(Arr[iCnt] != 0) 
	    { 
	        iDigit = Arr[iCnt] % 10; 
	        j++;
	        Arr[iCnt] = Arr[iCnt] / 10; 
	    }
	    
	        if(j==3 )
	        {
	            printf("\n%d\t",num);
	        }
	    
	    j=0;
	    
	}
	
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
	
	
	Num3Digit(ptr,iLength);
	
	free(ptr);
	
	return 0;
}