/* Write a program which accept name from user and print that name. */

#include<stdio.h>

int main()
{
	char name[30] = {'\0'};
	
	printf("Enter your name\n");
	scanf(" %s",&name);
	
	printf("Your name is :\n %s",name);
	
	return 0;
}



