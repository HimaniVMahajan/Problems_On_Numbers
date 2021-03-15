/* Write a program which accept number from user and print that number of $ & * on screen.

Input : 5
Output : $ * $ * $ * $ * $ *

Input : 3
Output : $ * $ * $ *

*/

#include<stdio.h>			

void DisplaySymbols(int iNo)			//Helper function
{
	if(iNo == 0)
	{
		printf("Invalid Input");
	}
	
	if(iNo < 0)						//updator
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		printf("$ \t * \t");
		iNo--;
	}
}

int main()				//Entry point function
{
	int iRet = 0 , iNum = 0;
	
	printf("Enter the Number:-\n");
	scanf("%d",&iNum);
	printf("\n");
	
	DisplaySymbols(iNum);
	
	return 0;
}
	
	



