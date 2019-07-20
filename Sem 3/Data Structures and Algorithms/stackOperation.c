#include <stdio.h>
#define size 5

int stack[size];
int top = -1;

void push(int data);
void pop();
void display();

int main()
{
	int choice;
	int temp;
	
	do{
		printf("Main menu for Stack Operations:-\n");
		printf("Press 1 for push data\n");
		printf("Press 2 for pop data\n");
		printf("Press 3 to Display stack\n");
		printf("Press 4 to Exit.\n");
		printf("Enter your choice here: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1: 	
					printf("Enter the data to push: ");
					scanf("%d", &temp);
					push(temp);
					break;
			case 2:
					pop();
					break;
			case 3:
					display();
					break;
					
		}
		
		printf("\n");		
	}while(choice != 4);
	
	printf("Program Ended.\n");
	
	return 0;
}

void push(int data){
	if(top >= size - 1){
		printf("\nStack is Full.\n");
	}else{
		top = top + 1;
		stack[top] = data;
	}
}

void pop(){
	if(top < 0){
		printf("\nStack is Empty.\n");
	}else{
		printf("\nPoped Element: %d\n", stack[top]);
		stack[top] = 0;
		top = top - 1;
	}
}

void display(){
	int i;
	if(top < 0){
		printf("\nStack is Empty.\n");
	}else{
		printf("\nStack elements: ");
		for (i=top; i>=0; i--){
			printf("%d ", stack[i]);
		}	
	}
}
