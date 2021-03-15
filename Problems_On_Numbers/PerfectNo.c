/*WAP Accept Number from user and check whether that number is perfect or not. 
perfectNo :- is such a number that factors addition is that same no.
*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckPerfectNo(int iNum)
{
	int iCnt = 0 , iSum = 0;
	
	for(iCnt=1; iCnt<iNum; iCnt++)
	{
		if((iNum % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	if(iSum == iNum)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}

int main()
{
	int iNo = 0 , iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	iRet = CheckPerfectNo(iNo);
	
	if(iRet == 1)
	{
		printf("Number is perfect number");
	}
	else
	{
		printf("Number is not a perfect number");
	}
	return 0;
}