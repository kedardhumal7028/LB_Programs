#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
	int iMax = Arr[0];
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(iMax < Arr[iCnt])
		{
			iMax = Arr[iCnt];
		}
	}
	
	
	return iMax;
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
	
	iRet = Maximum(ptr, iLength);
	
	printf("Maximum no is : %d\n",iRet);
	
	free(ptr);
	
	return 0;
}