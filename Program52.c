#include<stdio.h>

int sumOfDigit(int iNo)
{
	int iCnt = 0;
	int iDigit = 0;
	int iSum = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;
		iSum = iSum + iDigit;
		//iCnt++;
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter a number : \n");
	scanf("%d", &iValue);
	
	iRet = sumOfDigit(iValue);
	
	printf("Sum of Digit is : %d\n",iRet);
	
	return 0;
}

