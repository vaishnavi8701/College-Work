//Eligible for Voting

#include<stdio.h>
void main()
{
	int age;
	printf("Enter your age here: ");
	scanf("%d",&age);
	
	if(age >= 18)
	{
		printf("Your are eligible for voting.");
	}
	
	else
	{
		printf("Your are not eligible for voting.");
	}
}
