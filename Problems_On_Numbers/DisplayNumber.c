/* Write a program which accept number from user and print numbers till that number. 
Input : 8
Output : 1 2 3 4 5 6 7 8
*/

#include<stdio.h>

void DisplayNumber(int iNo)
{
	int i = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	printf("\n");
	
	for(i=1; i <= iNo; i++)
	{
		printf("%d\t",i);
	}
}
		
int main()
{
	int iNum = 0;
	
	printf("\n");
	printf("Enter the Number:-\n");
	scanf("%d",&iNum);
	
	DisplayNumber(iNum);
	
	return 0;
}
