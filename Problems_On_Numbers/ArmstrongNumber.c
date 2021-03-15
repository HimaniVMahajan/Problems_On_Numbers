/* WAP to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the numbers
	is equal to the number itself , then the number is called an Armstrong number.*/
	
#include<stdio.h>

int main()
{
	int i = 1 , iTemp = 0, iDigit = 0, iSum = 0;
	
	printf("\nArmstrong number between 1 to 500 are:\n");
	
	while(i<=500)
	{
		iTemp = i;
		
		while(iTemp>0)
		{
			iDigit = iTemp % 10;
			iSum = (iSum + (iDigit*iDigit*iDigit));
			iTemp = iTemp / 10;
		}
		if(iSum == i)
		{
			printf("\n%d\t",i);
		}
		i++;
		iSum = 0;
	}
	printf("\n");		
	
	return 0;
}