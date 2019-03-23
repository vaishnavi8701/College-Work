//Fibonacci Series program

#include<stdio.h>
void main()
{
	int f1,f2,third,n,i;
	
	printf("Enter the Nth value here:  ");
	scanf("%d",&n);
	
	f1 = 0;
	f2 = 1;
	
	printf("%d %d ",f1,f2);
	
	for (i=2;i<=n;i++)
	{
		third = f1 + f2;
		printf("%d ",third);
		f1 = f2;
		f2 = third;
	}
}
