/* Write a program to find factorial of given number. */

#include<stdio.h>

#define INVALID_INPUT 0

int FactorialOfNumber(int iNo)			//Helper function
{
	int i = 1 , iFact = 1;
	
	if(iNo == 0)
	{
		return INVALID_INPUT;
	}
	
	if(iNo < 0)						//updator
	{
		iNo = -iNo;
	}
	
	for(i=1; i<=iNo; i++)
	{
		iFact = iFact * i;
	}
	return iFact;
}

int main()							//Entry point function
{
	int iNum = 0 , iRet = 0;
	
	printf("\n");
	printf("Enter the Number:-\n");
	scanf("%d",&iNum);
	
	iRet = FactorialOfNumber(iNum);
	
	printf("\n");
	printf("Factorial of a Number is:-\n %d",iRet);
	
	
	if(iRet == 0)
	{
		printf("\n Invalid Input");
	}
	printf("\n");
	
	return 0;
}
	
	
	
	