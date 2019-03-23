//Greatest among Three numbers

#include<stdio.h>
void main()
{
	int a,b,c,great;
	
	printf("Enter the value of first number here: ");
	scanf("%d",&a);
	
	printf("Enter the value of second number here: ");
	scanf("%d",&b);
	
	printf("Enter the value of three number here: ");
	scanf("%d",&c);
	
	great = a>b ? (a>c ? a : c) : (b>c ? b : c);
		
	printf("%d is greatest among the three numbers.\n", great);
}
