/* Write a program which accept range from user and return addition of all even numbers in between that range.*/

#include<stdio.h>

int EvenRangeSum(int iNo1 , int iNo2)
{
	int iSum = 0;
	
	if(iNo1 < 0 && iNo2 < 0)
	{
		iNo1 = -iNo1;
		iNo2 = -iNo2;
	}
	
	if(iNo1 > iNo2)
	{
		printf("Invalid Input");
	}
	
	printf("\n");
	
	while(iNo1 <= iNo2)
	{
		if((iNo1 % 2) == 0)
		{
			iSum = iSum + iNo1;
		}
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
	
	iRet = EvenRangeSum(iValue1,iValue2);
	
	printf("Addition of all even numbers in between that range: %d",iRet);
	printf("\n");
	
	return 0;
}