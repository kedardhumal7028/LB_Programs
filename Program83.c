#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
	int iMin = Arr[0];
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(iMin > Arr[iCnt])
		{
			iMin = Arr[iCnt];
		}
	}
	
	
	return iMin;
}


int main()
{
	int *ptr = NULL;
	int iLength = 0, i = 0, iRet = 0;
	
	printf("Enter no of Elements : \n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(sizeof(int) * iLength);
	
	printf("Enter the elemets : \n");
	
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet = Minimum(ptr, iLength);
	
	printf("Minimum no is : %d\n",iRet);
	
	free(ptr);
	
	return 0;
}