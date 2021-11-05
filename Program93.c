//Accept N number and otheer 1 number and check that 1 number and return kontya index la aadhi safdla is there or not 


#include<stdio.h>
#include<stdlib.h>


int CheckFirstOccurance(int Arr[], int iSize,int iNo)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {   break;  }
    }
  
    if(i == iSize)
    {
        return -1 ;
    }
    else
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
	
    iRet = CheckFirstOccurance(ptr,iLength,iValue);
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