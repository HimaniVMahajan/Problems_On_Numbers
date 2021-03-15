/* Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. 
	(Area = PI * Radius * Radius)*/
	
#include<stdio.h>

double AreaOfCircle(float fRadius)
{
	double dArea = 0.0;
	
	if(fRadius < 0)
	{
		fRadius = -fRadius;
	}
	
	dArea = 3.14 * fRadius * fRadius;
	
	return dArea;
}
	
int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	
	printf("\n");
	
	printf("Enter the Radius:\t");
	scanf("%f",&fValue);
	
	dRet = AreaOfCircle(fValue);
	
	printf("\n");
	
	printf("Area of circle is:\t %lf",dRet);
	
	printf("\n");
	return 0;
}


	
