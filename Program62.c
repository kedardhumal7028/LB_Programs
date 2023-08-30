#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
	int iTemp = iNo;
	int iDigit = 0, iRev = 0;
	
	for(; iNo != 0; )
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo / 10;
	}
	
	/*while(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo / 10;
	}*/
	
	if(iRev == iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Please enter the number : ");
	scanf("%d",&iValue);
	
	iRet = CheckPalindrome(iValue);
	
	if(iRet == true)
	{
		printf("%d is pallindrome number\n",iValue);
	}
	else
	{
		printf("%d is not a pallindrome number\n",iValue);
	}
	
	return 0;
}  