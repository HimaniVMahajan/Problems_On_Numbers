/* Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)*/

#include<stdio.h>

double SquareMeter(int iNum)
{
	double dSqMeter = 0.0;
	
	if(iNum < 0)
	{
		iNum = -iNum;
	}
	
	dSqMeter = iNum * 0.0929;
	
	return dSqMeter;
}

int main()
{
	int iValue = 0;
	double dRet = 0.0;
	
	printf("\n");
	printf("Enter the Area in square feet:-\n");
	printf("\n");
	scanf("%d",&iValue);
	
	
	dRet = SquareMeter(iValue);
	
	printf("\n");
	printf("Area in square meter :\t %lf",dRet);
	
	printf("\n");
	
	return 0;
}