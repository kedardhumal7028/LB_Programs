#include<stdio.h>
#include<stdlib.h>


void CountEvenOdd(int Arr[], int iSize)
{
	int iCnt = 0;
	int iEvenCnt = 0;
	int iOddCnt = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iEvenCnt++;
		}
		else
		{
			iOddCnt++;
		}
	}
	
	
	printf("Even Count is : %d \n",iEvenCnt);
	printf("Odd Count is : %d\n",iOddCnt);
	
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
	
	 CountEvenOdd(ptr, iLength);
	
	
	
	free(ptr);
	
	return 0;
}