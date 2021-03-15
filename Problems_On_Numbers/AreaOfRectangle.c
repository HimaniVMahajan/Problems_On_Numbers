/* Write a program which accept width & height of rectangle from user and calculate its area.
	(Area = Width * Height) */
	
#include<stdio.h>

double AreaOfRectangle(float fWidth , float fHeight)
{
	double dArea = 0.0;
	
	return (dArea = fWidth * fHeight);
	
}

int main()
{
	float fValue1 = 0.0 , fValue2 = 0.0;
	double dRet = 0.0;
	
	printf("\n");
	printf("Enter the width and height of reactangle:-\n");
	printf("\n");
	scanf("%f %f",&fValue1,&fValue2);
	
	
	dRet = AreaOfRectangle(fValue1,fValue2);
	
	printf("\n");
	printf("Area of Rectangle is :\t %lf",dRet);
	
	printf("\n");
	
	return 0;
}