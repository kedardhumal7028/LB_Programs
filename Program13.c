#include<stdio.h>
#include<stdbool.h>

bool DivisibleByThreeAndFive(int iNo)
{
	if(iNo % 3 == 0 )
	{
		if(iNo % 3 == 0 )
		{	
			return true;
		}
	}
	
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	bRet = DivisibleByThreeAndFive(iValue);
	
	if(bRet == true)
	{
		printf("Number is divisible by three and five");
	}
	
	else
	{
		printf("Number is not divisible by three and five");
	}
	
	return 0;
}