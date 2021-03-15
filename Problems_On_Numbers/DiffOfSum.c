/*Write a program which accept number from user and return difference between summation of all its factors and non factors.*/

#include<stdio.h>

int DifferenceOfSummation(int iNum)
{
	int iCnt = 0 , iDiffSum = 0 , iSumF = 0 , iSumNF = 0;
	
	for(iCnt=1; iCnt<iNum; iCnt++)
	{
		if((iNum % iCnt) == 0)
		{
			iSumF = iSumF + iCnt;
		}
	}
	
	for(iCnt=1; iCnt<iNum; iCnt++)
	{
		if((iNum % iCnt) != 0)
		{
			iSumNF = iSumNF + iCnt;
		}
	}
	
	return (iDiffSum = iSumF - iSumNF ); 
}

int main()
{
	int iNo = 0 , iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	iRet = DifferenceOfSummation(iNo);
	
	printf("Difference between summation of all its factors and non factors:\n %d",iRet);
	
	return 0;
}