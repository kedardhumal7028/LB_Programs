#include<stdio.h>

/*int DisplayFactors(int iNo)
{
	int iCnt = 0;
	
	printf("Factors are :\n");
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\n",iCnt);
		}
	}
}

int main()
{
	iValue = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	DisplayFactors(iValue);
	
	
	return 0;
}*/

void DisplayFactors(int iNo)
{
	int iCnt = 0;
	
	printf("Factors of %d number is :\n",iNo);
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\n",iCnt);	
			
		}
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number : ");
	scanf("%d", &iValue);
	
	DisplayFactors(iValue);
	
	return 0;
}