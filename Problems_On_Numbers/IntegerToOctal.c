/* WAP to receive an integer and find its octal equivalent. */

#include<stdio.h>

int main()
{
	int iNum = 0, iDigits = 0, iQ= 0;
	
	printf("\nEnter the Number:\t");
	scanf("%d",&iNum);
	
	while(iNum > 0)
	{
		iDigits = iNum % 8;
		iNum = iNum / 8;
		printf("\n%d\t",iDigits);
	}
	
	return 0;
}