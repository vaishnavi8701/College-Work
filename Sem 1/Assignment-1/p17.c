//Check whether given number is prime or not

#include<stdio.h>
void main()
{
	int n,i;
	
	printf("Enter a number here:  ");
	scanf("%d",&n);
	
	if (n>1)
	{
		for(i=2;i<=n;i++)
		{
			if (n%i == 0){break;}
		}
		
		if(n == i){printf("Given Number is Prime Number\n");}
		else {printf("Not a Prime Number\n");}
	}
	
	else {
		printf("Not a Prime Number.\n");
	}
}
