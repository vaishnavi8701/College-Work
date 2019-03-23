//Sum of Natural Numbers

#include<stdio.h>
void main()
{
	int n,i,sum;
	
	printf("Enter the nth term here: ");
	scanf("%d", &n);
	
	sum = 0;
	
	for(i=1;i<=n;i++)
	{
		sum+= i;
	}
	
	printf("The Sum of %d natural numbers is %d",n,sum);
}
