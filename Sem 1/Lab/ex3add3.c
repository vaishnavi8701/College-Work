#include<stdio.h>
void main()
{
	int no_of_rows;
	printf("Enter the number of rows to be printed\n");
	scanf("%d",&no_of_rows);
	
	int row,colSpace,sym;
	
	for (row=1;row<=no_of_rows;row++)
	{
		for (colSpace=no_of_rows-row;colSpace>=1;colSpace--)
		{
			printf(" ");
		}
		for (sym=1;sym<=row;sym++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
