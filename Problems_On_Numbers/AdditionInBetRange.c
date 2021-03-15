/* Write a program which accept range from user and return addition of all numbers in between that range. */

#include<stdio.h>

int AdditionInBetRange(int iNo1 , int iNo2)
{
	int iSum = 0;
	
	if(iNo1 < 0 && iNo2 < 0)
	{
		iNo1 = -iNo1;
		iNo2 = -iNo2;
	}
	
	if(iNo1 > iNo2-)
	{
		printf("Invalid Input");
	}
	
	printf("\n");
	
	while(iNo1 <= iNo2)
	{
		iSum = iSum + iNo1;
		iNo1++;
	}
	printf("\n");
	
	return iSum;
}

int main()
{
	int iValue1 = 0 , iValue2 = 0 , iRet = 0;
	
	printf("\n");
	printf("Enter the range to display numbers in between that range:-\n");
	scanf("%d \t %d",&iValue1,&iValue2);
	
	iRet = AdditionInBetRange(iValue1,iValue2);
	
	printf("Addition of all Numbers in between Range: %d \n",iRet);
	
	return 0;
}
