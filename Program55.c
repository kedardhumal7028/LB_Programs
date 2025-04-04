//Acccept no from user 751 and output is 13
// sum of digits


#include<stdio.h>


int CountDigits(int iNo)
{
	int iDigit = 0;
	int iEvenCnt = 0;
	
	if(iNo < 0)		//filter
	{
		iNo = - iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo%10;
		if((iDigit%2)==0)
		{
			iEvenCnt++;
		}
		iNo /= 10;
	}
	
	
	return iEvenCnt;
}


int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("please enter number :\n");
	scanf("%d", &iValue);
	
	iRet = CountDigits(iValue);
	
	
	printf("Count of even digits are : %d", iRet);
	
	return 0;
}