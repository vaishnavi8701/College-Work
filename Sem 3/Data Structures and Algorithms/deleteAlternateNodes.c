/* Alternate node deletion in a Linked List */

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

delete_by_position(int pos){
    if(pos == 1){
        temp = head;
        head = head->next;
        free(temp);
    }
    else{
        int count = 1;
        struct node *prev;
        n = head;
        while(n->next != NULL && count != pos){
            prev = n;
            n = n->next;
            count++;
        }
        prev->next = n->next;
        free(n);
    }
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
	
	// Creating a linked list of 4 nodes
	create_head(5);
	insert_at_end(10);
	insert_at_end(15);
	insert_at_end(20);
	
	//Displaying the linked list
	display();
	printf("\n");
	
	//Deleting Alternate nodes
	int i;
    
	for(i=1; i<=4; i++){ //Total number of nodes is 4
	    if(i % 2 == 0){
	        delete_by_position(i);
	    }
	} 
	display();
	
	return 0;
}


/*
    Output:-
    
    Linked list: 5 10 15 20
    Linked list: 5 15

*/
