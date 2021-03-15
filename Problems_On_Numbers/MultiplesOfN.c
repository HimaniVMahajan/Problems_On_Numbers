/* Write a program which accept N and print first 5 multiples of N. */

#include<stdio.h>

int MultiplesOfN(int iNo)
{
	int iTemp = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	printf("\n");
	
	iTemp = iNo;
	for(int i = 0; i <=4; i++)
	{
		printf("%d\t",iNo);
		iNo = iNo + iTemp;
	}
	printf("\n");
}	

int main()
{
	int iValue = 0;
	
	printf("\n");
	printf("Enter the Number:-\n");
	scanf("%d",&iValue);
	
	MultiplesOfN(iValue);
	
	return 0;
}