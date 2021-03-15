/* Write a program which accept number from user and if number is less than 50 then print small , if it is greater than 50 
	and less than 100 then print medium, if it is greater than 100 then print large. */
	
#include<stdio.h>

typedef int BOOLEAN;

#define SMALL 1
#define MEDIUM 2
#define LARGE 3

BOOLEAN Number(int iNum)			//Helper function
{
	if(iNum < 0)					//updator
	{
		iNum = -iNum;
	}
	
	if(iNum < 50)
	{
		return SMALL;
	}
	else if(iNum >= 50 && iNum < 100)
	{
		return MEDIUM;
	}
	else
	{
		return LARGE;
	}
}

int main()							//Entry point function
{
	int iNo = 0 , iRet = 0;
	
	printf("\n");
	printf("Enter the Number:-\n");
	scanf("%d",&iNo);
	
	iRet = Number(iNo);
	
	printf("\n");
	
	if(iRet == 1)
	{
		printf("Number is Small");
	}
	else if(iRet == 2)
	{
		printf("Number is Medium");
	}
	else
	{
		printf("Number is Large");
	}
		
	return 0;
}

	
	
	