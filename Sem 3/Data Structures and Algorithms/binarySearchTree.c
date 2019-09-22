#include <stdio.h>

struct node{
	int key;
	struct node *leftChild;
	struct node *rightChild;
} *root;

struct node* newNode(int keyValue){
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->key = keyValue;
	temp->leftChild = NULL;
	temp->rightChild = NULL;
	return temp;
}

struct node* insert(struct node *node, int keyValue){
	if(node == NULL)
		return newNode(keyValue);
	else if(keyValue < node->key)
		node->leftChild = insert(node->leftChild, keyValue);
	else
		node->rightChild = insert(node->rightChild, keyValue);
}

int searchElement(struct node *node, int keyValue){
	if(node == NULL)
		return -1;
	else if(keyValue == node->key)
		return 1;
	else if(keyValue < node->key)
		searchElement(node->leftChild, keyValue);
	else
		searchElement(node->rightChild, keyValue);
}

void inOrder(struct node *node){
	if(node != NULL){
		inOrder(node->leftChild);
		printf("%d ", node->key);
		inOrder(node->rightChild);
	}
}

void preOrder(struct node *node){
	if(node != NULL){
		printf("%d ", node->key);
		preOrder(node->leftChild);
		preOrder(node->rightChild);
	}
}

void postOrder(struct node *node){
	if(node != NULL){
		postOrder(node->leftChild);
		postOrder(node->rightChild);
		printf("%d ", node->key);
	}
}

int main(){
	int choice, data, opt;
	printf("Enter data to create root node: ");
	scanf("%d", &data);
	root = newNode(data);
	
	do{
		printf("\nMain Menu for BST:-\n");
		printf("\t1. Press 1 to Insert\n");
		printf("\t2. Press 2 to Search\n");
		printf("\t3. Press 3 to Display\n");
		printf("\t4. Press 4 to Exit\n");
		printf("\tEnter your choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("\nEnter data to insert: ");
				scanf("%d", &data);
				insert(root, data);
				break;
			case 2:
				printf("\nEnter data to search: ");
				scanf("%d", &data);
				int result = searchElement(root,data);
				if(result == 1)
					printf("\nElement is Present\n");
				else
					printf("\nElement not found!!\n");
				break;
				
			case 3:
				do{
					printf("\n\tMenu to Display\n");
					printf("\t\t1. Press 1 to Display inOrder(Sorted way)\n");
					printf("\t\t2. Press 2 to Display preOrder\n");
					printf("\t\t3. Press 3 to Display postOrder\n");
					printf("\t\t4. Press 4 to Go back\n");
					printf("\t\tEnter your choice: ");
					scanf("%d", &opt);
					
					switch(opt){
						case 1:
							printf("\nSorted elements: ");
							inOrder(root);
							printf("\n");
							break;
						case 2:
							printf("\nPreOrder elements: ");
							preOrder(root);
							printf("\n");
							break;
						case 3:
							printf("\nPostOrder elements: ");
							postOrder(root);
							printf("\n");
							break;
					}
				}while(opt != 4);
		}
	}while(choice != 4);
	
	printf("\nThanku for using my applicaiton\n");
	
	return 0;
}
