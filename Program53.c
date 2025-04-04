#include<stdio.h>

int countEvenDigit(int iNo)
{
	int iDigit = 0;
	int iAns = 0;
	int iEvenCnt = 0;
	
	if(iNo == 0)
	{
		return 1;
	}
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;
		if(iDigit % 2 == 0)
		{
			iEvenCnt++;
		}
	}
		
	return iEvenCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter a number : \n");
	scanf("%d", &iValue);
	
	iRet = countEvenDigit(iValue);
	
	printf(" Even Digits are : %d\n", iRet);
	
	return 0;
}