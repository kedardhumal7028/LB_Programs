/*
row = 4
col = 4


#	1	1	1
2	#	2	2
3	3	#	3
4	4	4	# 


*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int iCnt = 0;
	int i = 0;
	int j = 0;
	
	if(iRow != iCol)
	{
		printf("Row no and column no are not same");
		return;
	}
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{			
			if(i == j)
			{
				printf("#\t");
			}
			else
			{
				printf("%d\t",i);
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