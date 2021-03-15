/* Write a program which accept number from user and print its numbers line. */

#include<stdio.h>

void DisplayNumberLine(int iNo)			//Helper function
{
	int iTemp = 0 , i = 0;
	
	if(iNo < 0)							//Updator
	{
		iNo = -iNo;
	}
	
	printf("\n");
	
	iTemp = -iNo;

	for(i=iNo; iTemp <= iNo; iTemp++)
	{
		printf("%d\t",iTemp);
	}
	
}
		
int main()							//Entry point function
{
	int iNum = 0;
	
	printf("\n");
	printf("Enter the Number:-\n");
	scanf("%d",&iNum);
	
	DisplayNumberLine(iNum);
	
	return 0;
}
