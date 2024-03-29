////////////////////////////////////////////////////////
//Steps to fallow while programming
////////////////////////////////////////////////////////

//Steps 1   Understand problem ststement
//Steps 2   Write the Algoritm
//Steps 3	Decide the programming language
//Steps 4	Write the program
//Steps 5	Test the program

////////////////////////////////////////////////////////////////
// Problem Statement: Accept number from user and check whether it is divided by 
//////////////////////////////////////////////////////////////

////////////////////////////////////////////////
//  Algorithm
////////////////////////////////////////////////////////////

/*  
	START
		Accept number from user as NO
		Divide that NO by 5 and check the value of reminder
		If the Value is 0
			Then display as NO is Divisible by 5
		Otherwise
			display as NO is not divisible by 5
	END
*/

#include<stdio.h>

int Mult(int iNo)
{
	int iRet = 0;
	iRet = iNo % 5;
	
	if(iRet == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = Mult(iValue);
	
	if(iRet == 1)
	{
		printf("%d is divisible by 5",iValue);
	}
	else
	{
		printf("%d is not divisible by 5",iValue);
	}
	
	return 0;
}