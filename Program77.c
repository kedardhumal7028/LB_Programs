#include<stdio.h>
#include<stdlib.h>


void SumEvenOdd(int Arr[], int iSize)
{
	int iCnt = 0;
	int iEvenCnt = 0;
	int iOddCnt = 0;
	int iEvenSum = 0;
	int iOddSum = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iEvenSum = iEvenSum + Arr[iCnt];
		}
		else
		{
			iOddSum = iOddSum + Arr[iCnt];
		}
	}
	
	
	printf(" Sum of Even element is : %d \n",iEvenSum);
	printf("Sum of Odd element is : %d\n",iOddSum);
	
}

int main()
{
	int *ptr = NULL;
	int iLength = 0, i = 0;
	
	printf("Enter number of elements : \n");
	scanf("%d",&iLength);
	
	
	ptr = (int *)malloc(iLength * sizeof(int));
	
	printf("Enter the Elements : \n");
	
	for(i = 0; i < iLength; i++)
	{
		scanf("%d", &ptr[i]);
	}
	
	 SumEvenOdd(ptr, iLength);
	
	
	
	free(ptr);
	
	return 0;
}