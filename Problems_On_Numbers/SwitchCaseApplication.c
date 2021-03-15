/* WAP which to find the grace marks for a student using switch. The user should enter the class obtained by the student and the 
   number of subject he has failed in. */
   
 #include<stdio.h>
 
 int main()
 {
	int choice = 0 , sub = 0;
	
	printf("\nChoose the below options\n");
	printf("\n1.First Class\n");
	printf("\n2.Second Class\n");
	printf("\n3.Third Class\n");
	
	printf("\nEnter the class obtained by the student:\t");
	scanf("%d",&choice);
	
	printf("\nEnter the number of subject Failed:\t\n");
	scanf("%d",&sub);
	
	switch(choice)
	{
		case 1:
				if(sub>3)
				{
					printf("\nDoes not get any grace\n");
				}
				else if(sub<=3)
				{
					printf("\nGrace is of 5 marks per subject\n");
				}
				break;
				
		case 2:
				if(sub>2)
				{
					printf("\nDoes not get any grace\n");
				}
				else if(sub<=2)
				{
					printf("\nGrace is of 4 marks per subject\n");
				}
				break;
				
		case 3:
				if(sub>1)
				{
					printf("\nDoes not get any grace\n");
				}
				else if(sub==1)
				{
					printf("\nGrace is of 5 marks per subject\n");
				}
				break;
		
		default:
				printf("\nYour entered choice is wrong\n");
				
	}
	
	return 0;
 }
	
	