/* Write a Program to print all Prime numbers between 1 to 300 */

#include<stdio.h>

int main()
{
	
	int i = 1 , iFactor = 0, iTemp = 0 ;
	
	while(i<=300)
	{
		iTemp = i;
		
		while(iTemp>0)
		{
			if((i%iTemp)==0)
			{
				iFactor++;
			}
			iTemp--;
		}
		if(iFactor == 2)
		{
			printf("%d\t",i);
		}
		iFactor = 0;
		
		i++;
	}
			
	return 0;
}