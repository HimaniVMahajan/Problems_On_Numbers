/* Write a program which accept number from user and display its table in reverse order. */

#include<stdio.h>

#define INVALID_INPUT 0

int DisplayRevTables(int iNo)			//Helper function
{
	int iTemp = 0;
	
	if(iNo == 0)
	{
		return INVALID_INPUT;
	}
	
	if(iNo < 0)						//updator
	{
		iNo = -iNo;
	}
	
	printf("\n");
	
	iTemp = iNo;
	iNo = iNo * 10;
	while(iNo > 0)
	{
		printf("%d\t",iNo);
		iNo = iNo - iTemp;
	}
}

int main()							//Entry point function
{
	int iNum = 0 , iRet = 0;
	
	printf("\n");
	printf("Enter the Number:-\n");
	scanf("%d",&iNum);
	printf("\n");
	
	iRet = DisplayRevTables(iNum);
	
	if(iRet == 0)
	{
		printf("Invalid Input");
	}
	
	return 0;
}
	
	
	
	