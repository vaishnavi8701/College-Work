#include<stdio.h>
void main()
{
	int i,sum;
	sum = 0;	
	
	printf("Using while loop\n");
	i = 2;	
	while(i<=100)
	{
		sum = sum + i;
		i = i + 3;
	}
	printf("%d\n",sum);
}
