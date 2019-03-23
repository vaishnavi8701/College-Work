#include<stdio.h>
void main()
{
	int flag;
	printf("Enter the number here: ");
	scanf("%d",&flag);
	
	switch(flag){
		case 1:
			printf("HOT");
			break;
			
		case 2:
			printf("LUKE WARM");
			break;
			
		case 3:
			printf("COLD");
			break;
		
		default:
			printf("OUT OF RANGE");
			break;
	}
}
