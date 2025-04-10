/*
row = 4
col = 4


*	#	*	#
*	#	*	#
*	#	*	#
*	#	*	# 


*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int iCnt = 0;
	int i = 0;
	int j = 0;
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			if(j % 2 == 0)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}


int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter Number Rows :\n");
	scanf("%d",&iValue1);
	
	printf("Enter Number Columns :\n");
	scanf("%d",&iValue2);

	printf("Pattern is :\n");
	
	Display(iValue1, iValue2);
	
	return 0;
}