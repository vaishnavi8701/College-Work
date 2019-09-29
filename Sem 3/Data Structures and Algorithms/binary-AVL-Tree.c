#include <stdio.h>
#include <stdlib.h>

//typedef is used to rename struct node as Node.
typedef struct node{
	int key, height;
	struct node *leftChild, *rightChild;
}Node;

//List of Functions
int height(Node *N);
int balance(Node *N);
Node* newNode(int data);
Node* insert(Node *N, int data);
Node* rotateRight(Node *N);
Node* rotateLeft(Node *N);
Node* rotateLR(Node *N);
Node* rotateRL(Node *N);
void inOrder(Node *N);
void preOrder(Node *N);
void postOrder(Node *N);

int main(){
	Node *root = NULL;
	root = insert(root, 12);
	int i, n, op, data, choice;
	do{
		printf("Main Menu for AVL Tree:\n");
		printf("Press 1 to Create\n");
		printf("Press 2 to Insert\n");
		printf("Press 3 to Display\n");
		printf("Press 4 to Exit\n");
		printf("Enter your choice here: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("\nEnter number of elements: ");
				scanf("%d", &n);
				printf("First element is root node\n");
				for(i=0; i<n; i++){
					printf("Enter data: ");
					scanf("%d", &data);
					root = insert(root, data);
				}
				break;
			
			case 2:
				printf("\nEnter a number to insert: ");
				scanf("%d", &data);
				root = insert(root, data);
				break;
			
			case 3:
				do{
					printf("\nMenu for Display:\n");
					printf("Press 1 to inOrder display\n");
					printf("Press 2 to preOrder display\n");
					printf("Press 3 to postOrder display\n");
					printf("Press 4 to Exit\n");
					printf("Enter your option: ");
					scanf("%d", &op);
					
					switch(op){
						case 1: 
								printf("\nSorted Way: ");
								inOrder(root);
								break;
						case 2:
								printf("\nPreOrder display: ");
								preOrder(root);
								break;
						case 3: 
								printf("\nPostOrder display: ");
								postOrder(root);
								break;
					}
				}while(op != 4);
		}
		printf("\n");
		
	}while(choice != 4);
	
	printf("Thanku for using my application.\n");
	return 0;
}

int height(Node *N){
	int lh, rh;
	if(N == NULL)
		return 0;
	else{
		if(N->leftChild == NULL)
			lh = 0;
		else
			lh = 1 + height(N->leftChild);
			
		if(N->rightChild == NULL)
			rh = 0;
		else
			rh = 1 + height(N->rightChild);
		
		return (lh > rh) ? lh : rh;
	}
}

int balance(Node *N){
	int lh, rh;
	if(N == NULL)
		return 0;
	else{
		if(N->leftChild == NULL)
			lh = 0;
		else
			lh = 1 + height(N->leftChild);
			
		if(N->rightChild == NULL)
			rh = 0;
		else
			rh = 1 + height(N->rightChild);
		
		return (lh - rh);
	}
}

Node* newNode(int data){
	Node *temp;
	temp = (Node *)malloc(sizeof(Node));
	temp->key = data;
	temp->leftChild = temp->rightChild = NULL;
	return (temp);
}

Node* insert(Node *N, int data){
	if(N == NULL)
		return newNode(data);
		
	else if(data > N->key){
		N->rightChild = insert(N->rightChild, data);
		
		if(balance(N) == -2){
			if(balance(N->rightChild) <= 0)
				N = rotateLeft(N);
			else
				N = rotateRL(N);
			}
		}
		
	else{
		N->leftChild = insert(N->leftChild, data);
		
		if(balance(N) == 2){
			if(balance(N->leftChild) >= 0)
				N = rotateRight(N);
			else
				N = rotateLR(N);
			}
		}
	
	N->height = height(N);
	return (N);
}

Node* rotateRight(Node *N){
	Node *T;
	T = N->leftChild;
	N->leftChild = T->rightChild;
	T->rightChild = N;
	N->height = height(N);
	T->height = height(T);
	return (T);
}

Node* rotateLeft(Node *N){
	Node *T; 
	T = N->rightChild;
	N->rightChild = T->leftChild;
	T->leftChild = N;
	N->height = height(N);
	T->height = height(T);
	return (T);
}

Node* rotateRL(Node *N){
	N->rightChild = rotateRight(N->rightChild);
	N = rotateLeft(N);
}

Node* rotateLR(Node *N){
	N->leftChild = rotateLeft(N->leftChild);
	N = rotateRight(N);
}

void inOrder(Node *N){
	if(N != NULL){
		inOrder(N->leftChild);
		printf("%d (BF: %d)  ", N->key, balance(N));
		inOrder(N->rightChild);
	}
}

void preOrder(Node *N){
	if(N != NULL){
		printf("%d (BF: %d)  ", N->key, balance(N));
		preOrder(N->leftChild);
		preOrder(N->rightChild);
	}
}

void postOrder(Node *N){
	if(N != NULL){
		postOrder(N->leftChild);
		postOrder(N->rightChild);
		printf("%d (BF: %d)  ", N->key, balance(N));
	}
}
