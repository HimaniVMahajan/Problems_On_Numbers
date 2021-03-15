/*Write a program which accept distance in kilometre and convert it into meter. (1kilometre = 1000 Meter) */

#include<stdio.h>

int KilometerToMeter(int iKiloMeter)
{
	int iMeter = 0;
	
	if(iKiloMeter < 0)
	{
		iKiloMeter = -iKiloMeter;
	}
	
	iMeter = iKiloMeter * 1000;
	
	return iMeter;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("\n");
	printf("Enter the Distance in KiloMeter:-\n");
	printf("\n");
	scanf("%d",&iValue);
	
	
	iRet = KilometerToMeter(iValue);
	
	printf("\n");
	printf("Kilometer To Meter is :\t %d",iRet);
	
	printf("\n");
	
	return 0;
}