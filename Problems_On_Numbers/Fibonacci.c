/* Write a program to print Fibonacci series till the user wants. */

#include<stdio.h>

int main()
{
	int terms = 0 , i = 0 , first = 0 , second = 1 , next = 0;
	
	printf("\nEnter the number of terms that you want in series:\t");
	scanf("%d",&terms);
	
	printf("\n");
	for(i=0; i<terms; i++)
	{
		if(i<=1)
		{
			next = i;
		}
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		printf("%d\t",next);
	}
	printf("\n");
	return 0;
}
	
	
	
	