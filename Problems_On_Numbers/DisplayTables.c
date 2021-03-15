/* Write a program which accept number from user and display its table. */

#include<stdio.h>

#define INVALID_INPUT 0

int DisplayTables(int iNo)			//Helper function
{
	int iCnt = 10, i = 0 , iTemp = 0;
	
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
	for(i=0; i<iCnt; i++)
	{
		printf("%d\t",iNo);
		iNo = iNo + iTemp;
	}
}

int main()							//Entry point function
{
	int iNum = 0 , iRet = 0;
	
	printf("\n");
	printf("Enter the Number:-\n");
	scanf("%d",&iNum);
	printf("\n");
	
	iRet = DisplayTables(iNum);
	
	if(iRet == 0)
	{
		printf("Invalid Input");
	}
	
	return 0;
}
	
	
	
	