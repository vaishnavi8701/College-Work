//Factors of Given Number

#include<stdio.h>
void main()
{
	int num,i;
	
	printf("Enter a number here: ");
	scanf("%d",&num);
	
	if(num>1){
		printf("\nFactors of %d are:-",num);
		
		for(i=1;i<=num;i++)
		{
			if(num%i == 0){
				printf("\n   %d",i);
			}
		}
	}
	
	else{
		printf("\nGiven number is negative.\n");
	}
}
