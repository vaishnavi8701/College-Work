#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
} *head, *n, *temp, *prev;

int count = 0;
int totalNode = 0;

void create(int value){
	head = (struct node *)malloc(sizeof(struct node));
	head->data = value;
	head->next = head;
	totalNode = 1;
}

void insertAtEnd(int value){
	n = head;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = value;
	temp->next = head;
	do {
		prev = n;
		n = n->next;
	}while(n != head);
	prev->next = temp;
	totalNode = totalNode + 1;
}

void insertAtBegin(int value){
	temp = head;
	head = (struct node *)malloc(sizeof(struct node));
	head->data = value;
	head->next = temp;
	
	n = temp;
	do{
		prev = n;
		n = n->next;
	}while(n != temp);
	prev->next = head;
	totalNode = totalNode + 1;
}

void insertAtPos(int value, int pos){
	if(pos == 1)
		insertAtBegin(value);
	else{
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = value;
		n = head;
		count = 1;
		do {
			prev = n;
			n = n->next;
			count = count + 1;
		}while(n != head && count != pos);
		prev->next = temp;
		temp->next = n;
		totalNode = totalNode + 1;
	}	
}

void deleteByValue(int value){
	if(head->data == value){
		n = head;
		temp = head;
		head = head->next;
		do{
			prev = n;
			n = n->next;
		}while(n != temp);
		prev->next = head;
		free(temp);
		totalNode = totalNode - 1;
	}else {
		n = head;
		do{
			prev = n;
			n = n->next;
		}while(n->data != value && n != head);
		if(n == head){
			printf("\nValue Does not Exist\n");
			return ;
		}
		temp = n;
		prev->next = n->next;
		free(temp);
		totalNode = totalNode - 1;
	}
}

void deleteByPos(int pos){
	if(pos == 1){
		n = head;
		temp = head;
		head = head->next;
		do{
			prev = n;
			n = n->next;
		}while(n != temp);
		prev->next = head;
		free(temp);
		totalNode = totalNode - 1;
	}else{
		n = head;
		count = 1;
		do{
			prev = n;
			n = n->next;
			count = count + 1;
		}while(count != pos && n != head);
		if(n == head){
			printf("\nValue Does not Exist\n");
			return ;
		}
		temp = n;
		prev->next = n->next;
		free(temp);
		totalNode = totalNode - 1;
	}
}

void find(int value){
	n = head;
	do{
		prev = n;
		n = n->next;
	}while(n->data != value && n != head);
	
	/*This code will be executed if the entered data is present in the head*/
	if(n == head && n->data == value){
		printf("\nElement is Present.\n");
		return ;
	}else{
		
		/*This code will be executed if the entered data is not present in the list*/
		if(n == head){
			printf("\nElement is not found.\n");
		}
		
		/*This code will be executed if the entered data is present in the list*/
		else{
			printf("\nElement is Present.\n");
		}
	}
}

void display(){
	n = head;
	printf("\nCicular list elements: ");
	do{
		printf("%d -> ", n->data);
		n = n->next;
	}while(n != head);
	printf("%d (Head)", n->data);
	printf("\n");
}

int main(){
	int choice, data, pos;
	
	//Creation of Header node
	printf("Enter a data to insert at header node: ");
	scanf("%d", &data);
	create(data);
	
	//Circular list operations can be performed here
	do{
	
	printf("\nMain Menu for Cicular Linked List:-\n");
	printf("Press 1 to Insert at end.\n");
	printf("Press 2 to Insert at beginning.\n");
	printf("Press 3 to Insert at position.\n");
	printf("Press 4 to Delete by value.\n");
	printf("Press 5 to Delete by position.\n");
	printf("Press 6 to Find a element.\n");
	printf("Press 7 to Show Total Nodes.\n");
	printf("Press 8 to Display the list.\n");
	printf("Press 9 to Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	
		switch(choice){
			case 1:
					printf("\nEnter the data: ");
					scanf("%d", &data);
					insertAtEnd(data);
					break;
			case 2:
					printf("\nEnter the data: ");
					scanf("%d", &data);
					insertAtBegin(data);
					break;
			case 3:
					printf("\nEnter the data: ");
					scanf("%d", &data);
					printf("Enter the position: ");
					scanf("%d", &pos);
					insertAtPos(data, pos);
					break;
			case 4:	
					printf("\nEnter a value: ");
					scanf("%d", &data);
					deleteByValue(data);
					break;
			case 5:
					printf("\nEnter a position: ");
					scanf("%d", &pos);
					deleteByPos(pos);
					break;
			case 6:
					printf("\nEnter a value to search: ");
					scanf("%d", &data);
					find(data);
					break;
			case 7:
					printf("\nTotal Number of Nodes: %d", totalNode);
					break;
			case 8:
					display();
					break;
		}	
		printf("\n");
	}while(choice != 9);
	
	printf("Thank you for using my application.\n");
	
	
	return 0;	
}
