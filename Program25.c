#include<stdio.h>

int Summation()
{
	int i = 0, Ans = 0; 
	
	for(i=0; i<=5; i++)
	{ 
		Ans = Ans + i;
	}
	
	return Ans;
	
}

int main()
{
	int iRet = 0;
	
	iRet = Summation();
	printf("Summation is : %d", iRet);
	
	return 0;
}