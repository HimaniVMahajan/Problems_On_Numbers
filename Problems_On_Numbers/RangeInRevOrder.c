/* Write a program which accept accept range from user and display all numbers in between that range in reverse order. */

#include<stdio.h>

void DisplayInBetRange(int iNo1 , int iNo2)
{
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
	
	while(iNo2 >= iNo1)
	{
		printf("%d\t",iNo2);
		iNo2--;
	}
	printf("\n");
}

int main()
{
	int iValue1 = 0 , iValue2 = 0;
	
	printf("\n");
	printf("Enter the range to display numbers in between that range:-\n");
	scanf("%d \t %d",&iValue1,&iValue2);
	
	DisplayInBetRange(iValue1,iValue2);
	
	return 0;
}