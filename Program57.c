#include<stdio.h>

int DisplayEvenOddDigits(int iNo)
{
	int iEvenCnt = 0, iOddCnt = 0;
	int iDigit = 0;
	
	if(iNo == 0)
	{
		iEvenCnt++;

	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		
		if((iDigit % 2) == 0)
		{
			iEvenCnt++;
		}
		else
		{
			iOddCnt++;
		}
		iNo = iNo / 10;
		
	}
	
	printf("number of even digits are : %d\n", iEvenCnt);
	printf("number of Odd digits are : %d\n", iOddCnt);

}

int main()
{
	int iValue = 0;
	
	printf("Please enter the number : ");
	scanf("%d",&iValue);
	
	DisplayEvenOddDigits(iValue);
	
	return 0;
}  