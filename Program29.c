#include<stdio.h>

int Summation(int iNo)
{
	int i = 0, Ans = 0; 
	
	for(i=0; i<=i; i++)
	{ 
		Ans = Ans + i;
	}
	
	return Ans;
	
}

int main()
{
	int iRet = 0;
	int iValue = 0;
	
	printf("Enter the value : ");
	scanf("%d",&iValue);
	
	iRet = Summation(iValue);
	printf("Summation is : %d", iRet);
	
	return 0;
}