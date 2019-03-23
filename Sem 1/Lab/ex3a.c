#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number here: ");
	scanf("%d",&n);
	
	if (n>0){printf("Positive Number");}
	else if(n == 0){printf("Given number is Zero.");}
	else{printf("Negative Number");}
}
