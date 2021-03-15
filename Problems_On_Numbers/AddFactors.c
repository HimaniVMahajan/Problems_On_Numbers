/* WAP Accept Number from user and return the addition of factor of that number */

#include<stdio.h>

int AdditionOfFactor(int iNum)
{
	int iCnt = 0 , iSum = 0;
	
	for(iCnt=1; iCnt<iNum; iCnt++)
	{
		if((iNum % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iNo = 0 , iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	iRet = AdditionOfFactor(iNo);
	
	printf("Addition of factors is:\n %d",iRet);
	
	return 0;
}
	