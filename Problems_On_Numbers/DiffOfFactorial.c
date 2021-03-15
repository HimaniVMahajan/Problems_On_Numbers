/* Write a program which returns difference between Even factorial and odd factorial of given number. */

#include<stdio.h>

#define INVALID_INPUT 0

int FactorialDifference(int iNo)
{
	int iEven = 1 , iOdd = 1 , iDiff = 0;
	
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
			iEven = iEven * iNo;
		}
		else
		{
			iOdd = iOdd * iNo;
		}
		
		iNo--;
	}
	
	iDiff = iEven - iOdd;
	
	return iDiff;
}

int main()					
{
	int iValue = 0;
	int iRet = 0;
	
	printf("\n");
	
	printf("Enter the Number:-\n");
	scanf("%d",&iValue);
	
	printf("\n");
	
	iRet = FactorialDifference(iValue);
	
	printf("Factorial Difference is:-\n %d",iRet);
	printf("\n");
	
	return 0;
}
	