//Roots of quadratic equation

#include<stdio.h>
#include<math.h>
void main()
{
	int d,b,a,c,x1,x2;
	
	printf("Enter the value of a: ");
	scanf("%d", &a);
	
	printf("Enter the value of b: ");
	scanf("%d", &b);
	
	printf("Enter the value of c: ");
	scanf("%d", &c);
	
	d = (b*b) - 4*a*c;
	
	if(d>0)
	{
		x1 = (-b+sqrt(d))/2*a;
		x2 = (-b-sqrt(d))/2*a;
		printf("the roots are real and different.\n");
		printf("Root 1:  %d\n", x1);
		printf("Root 2:  %d\n", x2);		
	}
	
	else if(d = 0)
	{
		x1 = -b/(2*a);
		x1 = x2;
		printf("The roots are equal\n");
		printf("Root: %d\n",x1);
	}
	
	else
	{
		printf("the roots are complex and different.\n");
	}
}
