/* WAP Accept Number from user and display its factors in decreasing order. */

#include<stdio.h>

void DecreasingOrderFactor(int iNum)
{
	int iCnt = 0;
	
	printf("Factors in Decreasing Order:-\n");
	for(iCnt=iNum; iNum>0; iCnt--)
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
	
	DecreasingOrderFactor(iNo);
	
	return 0;
}
	