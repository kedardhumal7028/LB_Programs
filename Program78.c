#include<stdio.h>
#include<stdlib.h>


int CalculateFrequency(int Arr[], int iSize, int iNo)
{
	int iCnt = 0;
	int iFrequency = 0;
	
	
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iFrequency++;
		}
	}
	
	
	return iFrequency;
	
	
	
}

int main()
{
	int *ptr = NULL;
	int iLength = 0, i = 0;
	int iValue = 0, iRet = 0;
	
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
	
	
	
	iRet = CalculateFrequency(ptr, iLength, iValue);
	
	printf("Frequency of %d is %d\n", iValue,iRet);
	
	free(ptr);
	
	return 0;
}