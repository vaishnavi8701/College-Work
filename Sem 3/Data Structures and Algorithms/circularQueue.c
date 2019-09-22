#include <stdio.h>
#define MAX 5
int items[MAX];
int front = -1;
int rear = -1;

int checkQueueFull(){
    if( (front == rear + 1) || (front == 0 && rear == MAX-1)) 
		return 1;
    return 0;
}

int checkEmpty(){
    if(front == -1) 
		return 1;
    return 0;
}

void enqueue(int data){
    if(checkQueueFull()) 
		printf("\n Queue is full \n");
    else
    {
        if(front == -1) front = 0;
        rear = (rear + 1) % MAX;
        items[rear] = data;
        printf("Enqueued: %d\n", data);
    }
}

int dequeue(){
    int element;
    if(checkEmpty()) {
        printf("\n Queue is empty \n");
        return(-1);
    } else {
        element = items[front];
        if (front == rear){
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % MAX;
            
        }
        printf("\nRemoved: %d \n", element);
        return(element);
    }
}

void display(){
    int i;
    if(checkEmpty()) 
		printf(" \n Queue is empty \n");
    else
    {
        for(i=front; i!=rear; i=(i+1)%MAX) {
            printf("%d ",items[i]);
        }
        printf("%d ",items[i]);
        printf("\n");
    }
}

int main(){
   	int choice, data;
   	do{
   		printf("Main Menu for Queue Operations:-\n");
   		printf("Press 1 to Enqueue element\n");
   		printf("Press 2 to Dequeue element\n");
   		printf("Press 3 to Display element\n");
   		printf("Press 4 to Exit\n");
   		printf("Enter your choice: ");
   		scanf("%d", &choice);
   		
   		switch(choice){
   			case 1:
   				printf("\nEnter the data to enqueue: ");
   				scanf("%d", &data);
   				enqueue(data);
   				break;
   			case 2:
   				dequeue();
   				break;
   			case 3:
   				printf("\nDisplaying the Queue elements: ");
   				display();
   				break;
		}
		printf("\n");
	   }while(choice != 4);
	   
	   printf("Thanku for using my application.\n");
    return 0;
}
