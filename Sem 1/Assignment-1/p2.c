//print decimal,hexadecimal and octal value

#include<stdio.h>
void main()
{
	int num;
	
	printf("Enter a number here:  ");
	scanf("%d",&num);
	
	printf("Decimal value of %d is %d\n", num,num);
	printf("Hexadecimal value of %d is %x\n", num,num);
	printf("Octal value of %d is %o\n", num,num);
}
