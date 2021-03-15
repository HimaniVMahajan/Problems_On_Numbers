/* Write a program which accept one number from user and check whether that number is greater than 100 or not.

Input : 101
Output : Greater

Input : 39
Output : Smaller
*/

#include<stdio.h>

typedef int BOOLEAN;

#define TRUE 1
#define FALSE 0

BOOLEAN CheckGreaterThan(int iNum)
{
	if(iNum > 100)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iNo = 0 , iRet = 0;
	
	printf("Enter the number:\n");
	scanf("%d",&iNo);
	
	iRet = CheckGreaterThan(iNo);
	
	if(iRet == 1)
	{
		printf("Number is greater than 100");
	}
	else
	{
		printf("Number is less than 100");
	}
	return 0;
}