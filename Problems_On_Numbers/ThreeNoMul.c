/* Write a program which accept three numbers and print its multiplication. */

#include<stdio.h>

int Multiplication(int iNum1, int iNum2 , int iNum3)
{
	int iSum = 0;
	
	if(iNum1 == 0)
	{
		iNum1 = 1;
	}
	
	if(iNum2 == 0)
	{
		iNum2 = 1;
	}
	
	if(iNum3 == 0)
	{
		iNum3 = 1;
	}
	
	iSum = iNum1 * iNum2 * iNum3;
	
	return iSum;
}
	

int main()
{
	int iNo1 = 0, iNo2 = 0, iNo3 = 0 , iRet = 0;
	
	printf("Enter the three Numbers\n");
	scanf("%d%d%d",&iNo1,&iNo2,&iNo3);
	
	iRet = Multiplication(iNo1,iNo2,iNo3);
	
	printf("Multiplication is :-\n %d",iRet);
	
	return 0;
}

