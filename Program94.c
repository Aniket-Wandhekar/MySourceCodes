//Accept N number and otheer 1 number and check that 1 number and return kontya index la last safdla is there or not 


#include<stdio.h>
#include<stdlib.h>


int CheckLastOccurance(int Arr[], int iSize,int iNo)
{
    int i = 0;
    for(i = iSize-1; i >= 0; i--)
    {
        if(Arr[i] == iNo)
        {   break;  }
    }
	{
        return i;
    }
}
int main()
{
    int iLength = 0, i = 0,iValue = 0;
    int *ptr = NULL;
    int iRet = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iLength);
    ptr = (int *)malloc(sizeof(int) * iLength);
    printf("Enter elements\n");
    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
	
	printf("Enter the element to search\n");
	scanf("%d",&iValue);
	
    iRet = CheckLastOccurance(ptr,iLength,iValue);
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Number is there at index : %d\n",iRet);
    }
    free(ptr);
    return 0;
}