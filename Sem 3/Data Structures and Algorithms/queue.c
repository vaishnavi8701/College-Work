#include <stdio.h>
#define max 5

int queue[max];
int front, rear;
front = -1;
rear = -1;

void enqueue(int data){
	if(rear > max){
		printf("Queue overflow.\n");
	}
	
	if(front == -1)
		front = 0;
	rear = rear + 1;
	queue[rear] = data;
	printf("Inserted data -> %d\n", queue[rear]);
}

void dequeue(){
	if(front == -1){
		printf("Queue is empty.\n");
	}else{
		printf("Deleted data -> %d\n", queue[front]);
		front = front + 1;
		if(front > rear)
			front = rear = -1;
	}
}

void display(){
	int i;
	printf("Queue elements: ");
	for(i=front; i<=rear; i++){
		printf("%d ", queue[i]);
	}
}

int main(){
	enqueue(1);
	enqueue(2);
	enqueue(3);
	dequeue();
	dequeue();
	display();
	return 0;
}
