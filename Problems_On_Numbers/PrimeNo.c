/* Write a program to check number is prime number or not?. */

#include<stdio.h>

int main()
{
	int num = 0,  i=0;
	
	printf("\nEnter the number:\t");
	scanf("%d",&num);
	
	i=2;
	
	while(i<=num-1)
	{
		if((num%i)==0)
		{
			printf("\nNumber is not a Prime Number\n");
			break;
		}
		i++;
	}
	
	if(i==num)
		printf("\nNumber is prime\n");
	
	return 0;
}