#include<stdio.h>
int main()
{
	int i,sum;
	sum = 0;
	for(i=2;i<=200;i+=2)
	{
		sum = sum + i;
	}
	printf("The sum of natural numbers is %d",sum);
	return 0;
}
