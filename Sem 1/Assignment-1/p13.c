//Find X and Y co-ordiante
#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	
	printf("Enter the value of y: ");
	scanf("%d",&y);
		
	if(x>0 && y>0) {printf("\nFirst Quardrant\n");}
	
	else if(x<0 && y>0){printf("Second Quadrant\n");}	
	
	else if(x<0 && y<0){printf("Third Quadrant\n");}
	
	else if(x>0 && y<0){printf("Fourth Quadrant\n");}
	
}
