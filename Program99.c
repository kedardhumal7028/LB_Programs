// Row = 4
// Column = 4

/*  
	*	*	*	*
	*	*	*	*
	*	*	*	*
	*	*	*	*	
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0;
	int j = 0;
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			printf("*\t");
		}
		
		printf("\n");
	}
	
	
	printf("\n");
}


int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter Number Row :\n");
	scanf("%d",&iValue1);
	
	printf("Enter Number Column :\n");
	scanf("%d",&iValue2);

	printf("Pattern is :\n");
	
	Display(iValue1, iValue2);
	
	return 0;
}