#include<stdio.h>
void main()
{
	int i,sum;
	sum = 0;
	printf("Using for loop\n");
	for(i=2;i<100;i+=3)
	{
		sum += i;
	}
	printf("%d\n",sum);
}
