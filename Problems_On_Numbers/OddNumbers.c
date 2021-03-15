/* Write a program which accepts N from user and print all odd numbers up to N. */

#include<stdio.h>

void DisplayOddNum(int iNum)		//Helper Function
{
	int i = 0;
	
	if(iNum < 0)					//Updator
	{
		iNum = -iNum;
	}
	
	for(i=0; i<iNum; i++)
	{
		if((i % 2) != 0)
		{
			printf("%d\t",i);
		}
	}
}

int main()						//	Entry Point Function
{
	int iN = 0;
	
	printf("\n");
	printf("Enter the Number:-\n");
	scanf("%d",&iN);
	
	DisplayOddNum(iN);
	
	return 0;
}
