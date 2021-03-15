/* WAP Accept Number from user and display the factors of that number */

#include<stdio.h>

void DisplayFactor(int iNum)
{
	int iCnt = 0;
	
	printf("Factors of that Number is:-\n");
	
	for(iCnt=1; iCnt<iNum; iCnt++)
	{
		if((iNum % iCnt) == 0)
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
	
	DisplayFactor(iNo);
	
	return 0;
}
	