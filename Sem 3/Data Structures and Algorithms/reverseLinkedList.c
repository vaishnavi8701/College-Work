/* Reversing a Singly Linked List*/

#include <stdio.h>
#include <stdlib.h>

struct node{
	int key;
	struct node *next;
}*head, *temp, *n;

void create_head(int data){
	head = (struct node*)malloc(sizeof(struct node));
	head->key = data;
	head->next = NULL;
}

void insert_at_end(int data){
	temp = (struct node*)malloc(sizeof(struct node));
	temp->key = data;
	temp->next = NULL;
	
	n = head;
	while(n->next != NULL){
		n = n->next;
	}
	n->next = temp;
}

void reverse_linked_list(){
	struct node *prev, *currentNode, *nextNode;
	prev = NULL;
	currentNode = head;
	while(currentNode != NULL){
		nextNode = currentNode->next;
		currentNode->next = prev;
		prev = currentNode;
		currentNode = nextNode;
	}	
	head = prev;
	printf("After Reversing\n");
	display();
}

void display(){
	n = head;
	printf("Linked List: ");
	do{
		printf("%d ", n->key);
		n = n->next;
	}while(n != NULL);
}

int main(){
	create_head(5);
	insert_at_end(10);
	insert_at_end(15);
	insert_at_end(20);
	display();
	printf("\n");
	reverse_linked_list();
	return 0;
}
