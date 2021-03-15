/* Accept amount in US dollar and return its corresponding value in Indian currency. */

#include<stdio.h>

int DisplayINR(int iDollar)
{
	int iResult = 0;
	
	if(iDollar < 0)
	{
		iDollar = -iDollar;
	}
	
	return(iResult = iDollar * 70);
}
	
int main()
{
	int i$ = 0 , iRet = 0;
	
	printf("\n");
	
	printf("Enter the amount in Dollar:-\n");
	printf("\n $ : ");
	scanf("%d",&i$);

	
	iRet = DisplayINR(i$);
	
	printf("\n");
	
	printf("Amount in Indian currency: %d Rs",iRet);
	
	printf("\n");
	
	return 0;
}