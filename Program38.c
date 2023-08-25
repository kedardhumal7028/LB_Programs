#include<stdio.h>

int DisplayTable(int iNo)
{
	int iCnt = 0, iTable = 0;
	
	printf("____________________\n");
	printf("Table of %d is :\n",iNo);
	printf("____________________\n");
	
	for(iCnt = 1; iCnt<=10; iCnt++)
	{
		iTable = iNo * iCnt;
		printf("%d\n",iTable);
	}
	
	printf("____________________\n");
	
	
}

int main()
{
	int iValue = 0, iRet = 0;
	printf("____________________\n");
	
	printf("Enter number\n");
	scanf("%d", &iValue);
	
	DisplayTable(iValue);
	
	
	return 0;
}