#include<stdio.h>
int main()
{
	char color;
	printf("Enter the starting letter of a color: ");
	scanf("%c",&color);
	switch (color)
	{
		case 'r':
		{ 
			printf("Red"); 
		  break;
		}
		case 'g':
		{
			printf("Green");
			break;
		}
		case 'b':
		{
			printf("Blue");
			break;
		}
		default:
		{
			printf("Black");
			break;
		}
	}
	return 0;

}
