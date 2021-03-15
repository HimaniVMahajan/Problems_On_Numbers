/* Write a program which accept total marks & obtained marks from user and calculate percentage. */

#include<stdio.h>

#define ERROR_INVALID_INPUT -1.0
#define ERROR_MISMATCH_INPUT -2.0

double CalPercentage(double iTMarks , double iObMarks)
{
	double dPer = 0.0;
	
	if((iObMarks <0) || (iTMarks <=0))
	{
		return ERROR_INVALID_INPUT;
	}
	
	if(iObMarks > iTMarks)
	{
		return ERROR_MISMATCH_INPUT;
	}
	
	dPer = ( (iObMarks / iTMarks) *100);
	
	return dPer;
}

int main()
{
	double iTotMarks = 0.0, iObtainMarks = 0.0;
	double dRet = 0.0;
	
	printf("Enter the Total Marks:-\n");
	scanf("%lf",&iTotMarks);
	
	printf("Enter the Obtained Marks:-\n");
	scanf("%lf",&iObtainMarks);
	
	dRet = CalPercentage(iTotMarks , iObtainMarks);
	printf("\n");
	
	if(dRet == -1.0)
	{
		printf("ERROR_INVALID_INPUT \n %lf ",dRet);
	}
	
	if(dRet == -2.0)
	{
		printf("ERROR_MISMATCH_INPUT \n %lf ",dRet);
	}
	
	printf("\n");
	
	printf("Perecentage is:-\n %lf \n",dRet);
	
	return 0;
}