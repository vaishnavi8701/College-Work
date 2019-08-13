// Double linked List program
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *prev;
	struct node *next;
}*head, *temp, *n;

int count = 0;

void create(int value) {
	head =	(struct node*) malloc(sizeof(struct node));
	head->data = value;
	head->next = NULL;
	head->prev = NULL;
}

void insert_at_begin(int value){
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = value;
	temp->next = head;
	temp->prev = head;
	head = temp;
	head->prev = NULL;
}

void insert_at_pos(int value, int pos){
	n = head;
	temp =(struct node*) malloc(sizeof(struct node));
	temp->data = value;
	count = 1;
	while(n->next != NULL && count != pos){
		n = n->next;
		count = count + 1;
	}
	temp->next = n;
	temp->prev = n->prev;
	(n->prev)->next = temp;	
	n->prev = temp;
}

void insert_at_end(int value){
	temp =	(struct node*) malloc(sizeof(struct node));
	temp->data = value;
	temp->next = NULL;
	n = head;
	while (n->next != NULL){
		n = n->next;
	}
	n->next = temp;
	temp->prev = n;
}

void delete(int value){
	 if(head->data == value){
	 	temp = head;
	 	head = head->next;
	 	head->prev = NULL;
	 	free(temp);
	 }else {
	 	n = head;
	 	while(n->data != value){
	 		n = n->next;
		 }
		 temp = n;
		 (n->prev)->next = n->next;
		 (n->next)->prev = n->prev;
		 free(temp);
	 }
}

void delete_pos(int pos){
	if(pos == 1){
	 	temp = head;
	 	head = head->next;
	 	free(temp);
	 }else{
	 	n = head;
		count = 1;
		while(n->next != NULL && count != pos){
			n = n->next;
			count = count + 1;
		}
		temp = n;
		(n->prev)->next = n->next;
		(n->next)->prev = n->prev;
		free(temp);
   }		
}

void find(int value){
	n = head;
	count = 1;
	while(n->next != NULL){
		if(n->data == value){
			printf("\nElement is Present\n");
			break;
		}else{
			n = n->next;
		}
	}
	
	/*This code will run if the entered value is the last element present*/
	if(n->next == NULL && n->data == value){
		printf("\nElement is Present\n");
	}
	/*This code will run if the entered value is not present in the linked list*/
	else if(n->next == NULL && n->data != value){
		printf("\nElement is Not Found\n");
	}
}

void display(){
	n = head;
	printf("%d", n->data);
	n = n->next;
	while(n != NULL){
		printf(" -> %d", n->data);
		n = n->next;
	}
	printf("\n");
}

void disRev(){
	n = head;
	while(n->next != NULL){
		n = n->next;
	}
	
	printf("%d", n->data);
	while(n->prev != NULL){
		n = n->prev;
		printf(" -> %d", n->data);
	}
	printf("\n");
}

int main(){
	int choice, data, pos;
	
	//Creation of Header Node
	printf("Enter the Data to insert at header node: ");
	scanf("%d", &data);
	create(data);
	printf("\n");
	do{
		printf("Main Menu for Linked List\n");
		printf("Press 1 to Insert at end\n");
		printf("Press 2 to Insert at beginning\n");
		printf("Press 3 to Insert by position\n");
		printf("Press 4 to Delete by value\n");
		printf("Press 5 to Delete by position\n");
		printf("Press 6 to Find element\n");
		printf("Press 7 to Display\n");
		printf("Press 8 to Exit\n");
		printf("Enter your choice here: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
					printf("\nEnter the value here: ");
					scanf("%d", &data);
					insert_at_end(data);
					break;
			case 2:
					printf("\nEnter the value here: ");
					scanf("%d", &data);
					insert_at_begin(data);
					break;
			case 3:
					printf("\nEnter the value here: ");
					scanf("%d", &data);
					printf("Enter the position here: ");
					scanf("%d", &pos);
					insert_at_pos(data, pos);
					break;
			case 4:
					printf("\nEnter the value here to delete: ");
					scanf("%d", &data);
					delete(data);
					break;
			case 5:
					printf("\nEnter the position here to delete: ");
					scanf("%d", &pos);
					delete_pos(pos);
					break;
			case 6:
					printf("\nEnter the value here to find: ");
					scanf("%d", &data);
					find(data);
					break;
			case 7:
					printf("\nDisplaying the Linked List: ");
					display();
					break;
		}
		printf("\n");
	}while(choice != 8);	
	
	printf("Thank you for using my application\n");
	
	return 0;
}



