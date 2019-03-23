//Check given number is palindrome?

#include<stdio.h>
void main()
{
	int num,temp,rem,result;
	
	printf("Enter your number here: ");
	scanf("%d",&num);
	
	temp = num;
	
	while(num != 0)
	{
		rem = num % 10;
		result = result*10 + rem;
		num = num / 10;
	}
	
	if (result == temp)
	{
		printf("Palindrome number.\n");
	}
	
	else 
	{
		printf("Not a Palindrome number.\n");
	}
}
