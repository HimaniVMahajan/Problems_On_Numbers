/* Write a program which accept number from user and display all its non factors. */

#include<stdio.h>

void DisplayNonFactor(int iNum)
{
	int iCnt = 0;
	
	printf("Non Factor element is:-\n");
	
	for(iCnt=1; iCnt<iNum; iCnt++)
	{
		if((iNum % iCnt) != 0)
		{
			printf("%d\n",iCnt);
		}
	}
}

int main()
{
	int iNo = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	DisplayNonFactor(iNo);
	
	return 0;
}
	