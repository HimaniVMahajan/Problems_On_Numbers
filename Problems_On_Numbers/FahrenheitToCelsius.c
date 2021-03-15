/*Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))*/

#include<stdio.h>

double FhToCs (float fTemp)
{
	double dCelsius = 0.0;
	
	if(fTemp < 0)
	{
		fTemp = -fTemp;
	}
	
	dCelsius = (fTemp - 32) * (5/9);
	
	return dCelsius;
}

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	
	printf("\n");
	printf("Enter the Temperature in Fahrenheit:-\n");
	printf("\n");
	scanf("%f",&fValue);
	
	
	dRet = FhToCs(fValue);
	
	printf("\n");
	printf("Temperature in Celsius is :\t %lf",dRet);
	
	printf("\n");
	
	return 0;
}