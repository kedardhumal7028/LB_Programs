#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckNumber(int Arr[], int iSize, int iNo)
{
	int iCnt = 0;
	
	
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			
			break;
		}
	}
	
	
	if(iCnt == iSize)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int *ptr = NULL;
	int iLength = 0, i = 0;
	int iValue = 0;
	bool iRet;
	
	printf("Enter number of elements : \n");
	scanf("%d",&iLength);
	
	
	ptr = (int *)malloc(iLength * sizeof(int));
	
	printf("Enter the %d Elements : \n",iLength);
	
	for(i = 0; i < iLength; i++)
	{
		scanf("%d", &ptr[i]);
	}
	
	printf("Enter the Elemnt to find the frequency :\n");
	scanf("%d",&iValue);
	
	
	
	iRet = CheckNumber(ptr, iLength, iValue);
	
	if(iRet == true)
	{
		printf("%d is Present in Array", iValue);
	}
	else
	{
		printf("%d is Not Present in Array", iValue);
	}
	free(ptr);
	
	return 0;
}