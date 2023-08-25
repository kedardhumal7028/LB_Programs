#include<stdio.h>

int DisplayReverse(int iNo)
{
	int iCnt = 0;
	
	printf("____________________\n");
	
	/*for(iCnt = iNo; iCnt>=1; iCnt--)
	{
		printf("%d\n",iCnt);
	}*/
	
	iCnt = iNo;
	while(iCnt >= 1)
	{
		printf("%d\n",iCnt);
		
		iCnt--;
	}
	
	printf("____________________\n");
}

int main()
{
	int iValue = 0, iRet = 0;
	printf("____________________\n");
	
	printf("Enter number\n");
	scanf("%d", &iValue);
	
	DisplayReverse(iValue);
	
	
	return 0;
}