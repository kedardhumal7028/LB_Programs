/*iNo = 721
iDigit = iNo % 10
iNo = iNo / 10
*/

//check digits in given number

#include<stdio.h>

int CountDigits(int iNo)
{
	int iCnt = 0;
	//int iDigit = 0;
	
	if(iNo == 0) //Filter
	{
		return 1;
	}
	
	if(iNo < 0) //Updater
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		//iDigit = iNo % 10;
		iNo = iNo / 10;
		iCnt++;
	}
	
	return iCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Please enter the number : ");
	scanf("%d",&iValue);
	
	iRet = CountDigits(iValue);
	
	printf("number of digits are : %d\n", iRet);
	
	return 0;
}