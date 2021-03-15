/* Two numbers are entered through the keyboard. Write a program to find the values of one number raised 
	to the power of another. */ 

#include<stdio.h>

int Power(int num1, int num2)
{
	int power = 1;
	
	while(num2>0)
	{
		power = power*num1;
		num2--;
	}
	return power;
}

int main()
{
	int no1 = 0, no2 = 0, iRet = 0;
	
	printf("\nEnter the two numbers:\n");
	scanf("%d%d",&no1,&no2);
	
	iRet = Power(no1,no2);
	
	printf("\nPower of the number is:\t%d\n",iRet);
	
	return 0;
}