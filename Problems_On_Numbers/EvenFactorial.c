/* Write a program to find even factorial of given number. */

#include<stdio.h>

#define INVALID_INPUT 0

int EvenFactorial(int iNo)
{
	int iResult = 1;
	
	if(iNo < 0 )
	{
		iNo = -iNo;
	}
	
	if(iNo == 0)
	{
		return INVALID_INPUT;
	}
	
	while(iNo > 0)
	{
		if((iNo % 2) == 0)
		{
			iResult = iResult * iNo;
		}
		
		iNo--;
	}
	return iResult;
}

int main()					
{
	int iValue = 0;
	int iRet = 0;
	
	printf("\n");
	
	printf("Enter the Number:-\n");
	scanf("%d",&iValue);
	
	printf("\n");
	
	iRet = EvenFactorial(iValue);
	
	printf("Even Factorial of a given number is:-\n %d",iRet);
	printf("\n");
	
	return 0;
}
	