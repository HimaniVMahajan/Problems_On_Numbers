/* Write a program which accept two numbers and check whether numbers are equal or not.
Input : 10 10
Output : Equal

Input : 10 -10
Output : Not Equal
*/

#include<stdio.h>

typedef int BOOLEAN;

#define TRUE 1
#define FALSE 0

BOOLEAN CheckEqual(int iNum1 , int iNum2)
{
	if(iNum1 == iNum2)
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
	int iNo1 , iNo2, iRet = 0;
	
	printf("Enter the two numbers:\n");
	scanf("%d%d",&iNo1,&iNo2);
	
	iRet = CheckEqual(iNo1, iNo2);
	
	if(iRet == 1)
	{
		printf("Boths Numbers are equal");
	}
	else
	{
		printf("Boths Numbers are not equal");
	}
	
	return 0;
}