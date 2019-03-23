#include<stdio.h>
void main()
{
	int i,sum;
	sum = 0;
	printf("Using do-while loop\n");
	i = 2;
	do{
		sum = sum + i;
		i = i + 3;
	}while(i<=100);
	printf("%d\n",sum);
}
